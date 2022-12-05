#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 최댓값 : scores1(중간), scores2(기말)
int func_a(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

// 최솟값 : scores1(기말), scores2(중간)
int func_b(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];
    return answer;
}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    // 각 학생에 대하여 기말고사 점수에서 중간고사 점수를 뺀 값의 최댓값
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
    // 각 학생에 대하여 기말고사 점수에서 중간고사 점수를 뺀 값은 최솟값
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);
    // 위 두 과정에서 구한 점수를 배열(answer)에 담아 return
    return answer;
}

int main() {
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}