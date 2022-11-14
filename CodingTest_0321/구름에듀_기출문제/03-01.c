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



// n : �л� ��ȣ
// scores : ���Ĵ��, �迭
int solution(int scores[], int scores_len, int n) {
    // 1. n�� �л��� ������ ������ �����մϴ�.
    int score = func_c(scores, n);
    // 2. ������ ������������ �����մϴ�.
    func_b(scores, scores_len);
    // 3. �迭�� ù ���� ���Һ��� ������ ���ұ��� ��ȸ�ϸ� n�� �л��� ������ ã���ϴ�.
    int answer = func_a(scores, scores_len, score);
    // 4. 1�� �ܰ迡�� �����ص� ������ ���� ������ ã���� ����� return �մϴ�.
    return answer;
}

int main() {
    int scores[4] = { 20, 60, 98, 59 };
    int scores_len = 4;
    int n = 3;
    int ret = solution(scores, scores_len, n);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}