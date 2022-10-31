#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int floors[], int floors_len) {
    // 1(floors[1] - 2(floors[0]) = 1
    // 2(floors[2] - 5(floors[1]) = 3
    // 5(floors[3] - 4(floors[2]) = 1
    // 4(floors[4] - 2(floors[3]) = 2
    int dist = 0;
    for(int i = 1; i < floors_len; ++i){
        if(floors[i] >= floors[i-1])
            // ����� ���ϱ�
            dist += floors[i] - floors[i-1];
        else
            dist += floors[i-1] - floors[i];
    }
    return dist;
}

int main() {
    int floors[5] = { 1, 2, 5, 4, 2 };
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}