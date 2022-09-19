#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// ���� 04
// ģ���� ���� ������ 1�������� �־����ϴ�.
// COS PRO ��ĭä����� 
// ������ �̸� ��������� func_a, func_b, func_c 3������ ��������ϴ�.
// ������ �Լ����� ���޹޴� �Ű������� ��������, ��� ������ �ϰ� �ִ��� ���ϰ��� �Ÿ�������� Ȯ���ϼž� �մϴ�.
// ������� 3������ solution �Լ����� ��� ���Ǵ��� ������ �����ؼ� �ֽ��ϴ�.
// ��� ���� �Ű������� ���� �޾Ƽ� ������� ��� �Ǵ���
// �������� ���ϰ��� �ϴ� �κ��� ��ĭ���� � �κ������� �ľ��ϼž� �մϴ�.
// �� �� ���캸�ø� �迭������ ��� ���� 0���� �ʱ�ȭ�� �� ��
// �迭������ ������ ���ȣ[] �ȿ� ������ ���� �־� ++�� �������׽��ϴ�.
// �迭�� �ε����� ������ ����ϴ� ����ε� ���� �� ���Ҷ� ���� ����ϴ� ����Դϴ�.
// �� �ؼ��� ������ ���޹��� �迭���� �� ã�� �Լ��Դϴ�.
// �� ���޹��� �迭���� �� ã�� �Լ��� �ǰڳ׿�.
// solution�� ��ĭ���� ������ � �Լ��� � ���� ���޹޾� ���Ǵ����� �ۼ����ֽø� �˴ϴ�.

int* func_a(int arr[], int arr_len) {
    // 1000������ ���ڸ� ���� �� �ִ� �迭�� ����
    int* counter = (int*)malloc(sizeof(int) * 1001);

    // ������ ������ 0���� �ʱ�ȭ
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;
    return counter;
}

int func_b(int arr[], int arr_len) {
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < arr[i])
            ret = arr[i];
    }
    return ret;
}

int func_c(int arr[], int arr_len) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] != 0 && ret > arr[i])
            ret = arr[i];
    }
    return ret;
}

// arr : �ڿ����� ����ִ� �迭
int solution(int arr[], int arr_len) {
    // 1�ܰ� : �迭�� ����ִ� �� �ڿ����� ������ ���ϴ�.
    int* counter = func_a(arr, arr_len);

    // 2�ܰ� : ���� ���� �����ϴ� ���� ������ ���մϴ�.
    // counter�� ������ ���ϱ� ���ؼ� ���̸� ���Ѵ�.
    int max_cnt = func_b(counter, arr_len);

    // 3�ܰ� : ���� ���� �����ϴ� ���� ������ ���մϴ�.
    // counter�� ������ ���ϱ� ���ؼ� ���̸� ���Ѵ�.
    int min_cnt = func_c(counter, arr_len);

    // 4�ܰ� : ���� ���� �����ϴ� ���� ���� ���� �����ϴ� ������ �� �� ������ ���մϴ�.
    return max_cnt / min_cnt;
}

int main() {
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}

