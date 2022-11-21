#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// TV의 개수
int solution(int programs[][2], int programs_len) {
    int answer = 0;
    int used_tv[25] = { 0, };

    // 시간대별 방영한 tv의 개수를 count
    for (int i = 0; i < programs_len; i++)
        // programs[i][0] : 시작시간, programs[i][1] : 끝나는 시간
        for (int j = programs[i][0]; j < programs[i][1]; j++)
            // 방영시간을 나타냄
            used_tv[j]++;

    // 하루에 TV를 2대 이상 트는 총 시간을 return 하도록
    for (int i = 0; i < 25; i++)
        if (used_tv[i] >= 2) // used_tv > 1도 가능
            answer++;

    return answer;
}

int main() {
    int programs[3][2] = { {1, 6}, {3, 5}, {2, 8} };
    int programs_len = 3;
    int ret = solution(programs, programs_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}