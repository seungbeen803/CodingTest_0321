#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���� 03
// ģ���� ���� ������ 1�������� �־����ϴ�.
// COS PRO ��ĭä����� 
// ������ �̸� ��������� �ϳ��� func_a�� ��������ϴ�.
// ������ �Լ����� ���޹޴� �Ű������� ��������, ��� ������ �ϰ� �ִ��� ���ϰ��� �Ÿ�������� Ȯ���ϼž� �մϴ�.
// ������� �Ѽ��� solution �Լ����� ��� ���Ǵ��� ������ �����ؼ� �ֽ��ϴ�.
// ��� ���� �Ű������� ���� �޾Ƽ� ������� ��� �Ǵ���
// �������� ���ϰ��� �ϴ� �κ��� ��ĭ���� � �κ������� �ľ��ϼž� �մϴ�.
// func_a�� 1�� 1�Ϻ��� ���� �޴� �Ű����� ��, �� ������ �� ���� �ľ��Ͽ� �������ݴϴ�.
// 1�� 2���� ��� ���ڸ� �����ұ��?
// munth_list�� �� ���� �ϼ��� ������ ���� �ȵǰ� 2�� 2���̶�� 1���� ���� �մϴ�.
// 
// �̰��� �����Ͽ� �ݺ����� ��ĭ�� �����ð�
// ������ ��ĭ�� ������ ���� �����Ͽ����� ���޹��� �� ���� ���ϸ�ǰ�����?

int func_a(int month, int day) {
	int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total = 0;
	for (int i = 0; i < month - 1; i++)
		total += month_list[i];
	total += day;
	return total - 1;
}

int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day);
	int end_total = func_a(end_month, end_day);
	return end_total - start_total;
}

int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = solution(start_month, start_day, end_month, end_day);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}

