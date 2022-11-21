#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;
    

    // 먹이(k)를 주지 않았을때 만들 수 있는 주스의 개수(answer)
    // 사과가 부족한 경우
    if (num_apple < 3 * num_carrot)
        answer = num_apple / 3;
    else
        // 당근이 부족한 경우
        answer = num_carrot;
    // 주스를 만들고 나서 남은 사과, 당근의 개수
    num_apple -= 3 * answer;
    num_carrot -= answer;

    // 먹이를 주는 것까지 고려해서 만들 수 있는 주스의 개수
    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
        // 과일이 4개 필요하기 때문에 4로 나누어준다
        if (i % 4 == 0)
            // 만들 수 있는 주스의 개수가 줄어들어야함
            answer--; // 주스의 개수(answer)는 줄어들어야 한다
    return answer;
}

int main() {
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}