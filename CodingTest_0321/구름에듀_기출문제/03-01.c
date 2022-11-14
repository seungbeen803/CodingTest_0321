#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int func_a(int scores[], int scores_len, int score) {
    for (int rank = 0; rank < scores_len; rank++)
        if (scores[rank] == score)
            return rank + 1;
    return 0;
}

void func_b(int arr[], int arr_len) {
    qsort(arr, arr_len, sizeof(int), compare);
}

int func_c(int arr[], int n) {
    return arr[n];
}



// n : 학생 번호
// scores : 정렬대상, 배열
int solution(int scores[], int scores_len, int n) {
    // 1. n번 학생의 점수를 변수에 저장합니다.
    int score = func_c(scores, n);
    // 2. 점수를 내림차순으로 정렬합니다.
    func_b(scores, scores_len);
    // 3. 배열의 첫 번쨰 원소부터 마지막 원소까지 순회하며 n번 학생의 점수를 찾습니다.
    int answer = func_a(scores, scores_len, score);
    // 4. 1번 단계에서 저장해둔 점수와 같은 점수를 찾으면 등수를 return 합니다.
    return answer;
}

int main() {
    int scores[4] = { 20, 60, 98, 59 };
    int scores_len = 4;
    int n = 3;
    int ret = solution(scores, scores_len, n);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}