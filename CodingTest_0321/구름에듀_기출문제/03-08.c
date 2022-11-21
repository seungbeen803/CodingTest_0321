#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// TV�� ����
int solution(int programs[][2], int programs_len) {
    int answer = 0;
    int used_tv[25] = { 0, };

    // �ð��뺰 �濵�� tv�� ������ count
    for (int i = 0; i < programs_len; i++)
        // programs[i][0] : ���۽ð�, programs[i][1] : ������ �ð�
        for (int j = programs[i][0]; j < programs[i][1]; j++)
            // �濵�ð��� ��Ÿ��
            used_tv[j]++;

    // �Ϸ翡 TV�� 2�� �̻� Ʈ�� �� �ð��� return �ϵ���
    for (int i = 0; i < 25; i++)
        if (used_tv[i] >= 2) // used_tv > 1�� ����
            answer++;

    return answer;
}

int main() {
    int programs[3][2] = { {1, 6}, {3, 5}, {2, 8} };
    int programs_len = 3;
    int ret = solution(programs, programs_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}