#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int passed, int non_passed) {
    return (passed > 1 && non_passed == 0);
}

int func_b(int scores[3]) {
    int answer = 0;
    if (scores[0] < 40) {
        answer++;
    }
    if (scores[1] < 44) {
        answer++;
    }
    if (scores[2] < 35) {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) {
    int answer = 0;
    if (scores[0] >= 80) {
        answer++;
    }
    if (scores[1] >= 88) {
        answer++;
    }
    if (scores[2] >= 70) {
        answer++;
    }
    return answer;
}

// scores
// {
//  {30, 40, 100},
//  {97, 88, 95)
// }
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        // 통과한 종목이 몇 개인지 셉니다.
        int passed = func_c(scores[i]);

        // 통과 점수의 반을 넘기지 못한 종목이 몇 개인지 셉니다.
        int non_passed = func_b(scores[i]);

        // 통과한 종목이 하나보다 많고, 통과 점수의 반을 넘기지 못한 종목이 없으면
        // 통과한 인원으로 셉니다.
        answer += func_a(passed, non_passed);
    }
    return answer;
}

int main() {
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}