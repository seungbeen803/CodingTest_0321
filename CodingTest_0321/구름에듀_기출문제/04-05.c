#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int calorie[], int calorie_len) {
    // 최솟값을 구하려면 범위를 최대로 정해주어야한다.
    int min_cal = calorie[0];
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) {
        // 현재값에-최솟값만큼 누적
        if (calorie[i] > min_cal)
            answer += calorie[i] - min_cal;
        // 최솟값이 갱신
        else
            min_cal = calorie[i];
    }
    return answer;
}

int main() {
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}