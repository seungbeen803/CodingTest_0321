#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

// 3. �� ��ǰ ��ȣ���� �ִ��� ���� �尩 ���� ����鼭 ������ ���ϴ�.
// gloves : ������ �ִ� �尩 list (�迭)
// gloves_len : gloves(�迭)�� ����
int* func_a(int gloves[], int gloves_len) {
    // �ε������� �ڸ��� ���߱� ���ؼ� +1�� �Ѵ�.
    // �����Ҵ� -> ���� ����
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    // ������ ���� ���� ������ ���� 0���� �ʱ�ȭ
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    // counter[gloves[0]]++;
    // counter[gloves[1]]++;
    // counter[gloves[2]]++;
    // counter[gloves[3]]++;
    // counter[gloves[4]]++;

    // glove[0] : 2
    // glove[1] : 1
    // glove[2] : 2
    // glove[3] : 2
    // glove[4] : 4
    
    // ��� ���Ҹ� ã�� �ݺ���
    for (int i = 0; i < gloves_len; ++i)
        // �迭�� �ε����� ���ȣ�� ����Ѵ�.
        // counter, gloves�� ��� �迭
        counter[gloves[i]]++;

        return counter;
} 

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    // 1. �޼� �尩�� ��ǰ ��ȣ���� �� ���� �ִ��� ������ ���ϴ�.
    int* left_counter = func_a(left_gloves, left_gloves_len);
    // 2. ������ �尩�� ��ǰ ��ȣ���� �� ���� �ִ� ������ ���ϴ�.
    int* right_counter = func_a(right_gloves, right_gloves_len);
    int total = 0;
    for (int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}