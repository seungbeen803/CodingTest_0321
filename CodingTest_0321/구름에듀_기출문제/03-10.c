#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
* 2     in 4, 8, 3, 6, 3
* 4     in 4, 8, 3, 6, 3
* 1.5   in 4, 8, 3, 6, 3
* 3     in 4, 8, 3, 6, 3
* 1.5   in 4, 8, 3, 6, 3
*/

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++)
        for (int j = 0; j < arr_len; j++)
            // 배열의 요소 값은 짝수여야만 한다(2로 나누어도 정수가 되어야 한다)
            // 자신을 2로 나눈 값(arr[i]/2)이 배열의 원소(arr[j])에 포함되어야 한다.
            if (arr[i] % 2 == 0 && arr[i] / 2 == arr[j]) {
                answer++;
                break;
            }
    return answer;
}

int main() {
    int arr[] = { 4, 8, 3, 6, 3 };
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}