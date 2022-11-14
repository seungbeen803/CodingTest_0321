#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
    int answer = 0;
    int max = -1;
    int min = 101;
    // 평균 구하기
    for (int i = 0; i < scores_len; i++) {
    // scores에 있는 모든 값을 더한다 -> a
        answer += scores[i];
    // a에 최댓값과 최솟값을 -> b
        if (max < scores[i])
            max = scores[i];
        if (min > scores[i])
            min = scores[i];
    }
    
    // b / (scores_len - 2)
    return (answer - min - max) / (scores_len - 2);
}

int main() {
    int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
    int scores1_len = 10;
    int ret1 = solution(scores1, scores1_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[5] = { 1, 1, 1, 1, 1 };
    int scores2_len = 5;
    int ret2 = solution(scores2, scores2_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}