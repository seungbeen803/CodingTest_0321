#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �����Ҵ� : �޸� �Ҵ� ũ�Ⱑ ����ð�(runtime)�� ����
//			  ���� ����� �޸� ���� �ȵ�
// �����Ҵ� : �޸� �Ҵ� ũ�Ⱑ ������ �ð��� ����
//			: ���������� ���� {} ����� �޸𸮰� ������

int main(void) {
	char str[10];	// �����Ҵ� 10����Ʈ �Ҵ��� ���� ��Ȯ��
	int num;
	scanf("%d", &num);
	
	// �����Ҵ� num�� �Է� ���� ���� ũ�Ⱑ �޶���
	char* str2 = (char*)malloc(sizeof(char) * num);
}

