#include <string.h>
#include <stdio.h>

int main(void)
{
	// �迭�� 20���� ������ ��������, ������ ���̴� 3
	char str[30] = "samgyetang";

	// ������ ���� ���ϴ� �Լ�;
	int length = strlen(str);
	printf("������� ���̴� %d\n", length);

	// ����2 copy_str�� "iceshu" ����ֱ�(�����ϱ�)
	char copy_str[30];
	strcpy(copy_str, "iceshu");
	printf("������ ���ڿ��� %s \n", copy_str);

	// ����3 copy_str "delicious" �����̱�
	strcat(copy_str, " delicious");
	printf("������ ���ڿ��� %s \n", copy_str);

	// ����4 "BMW"�� "benz"�� �� ���ڿ��� ������ �ٸ����� �Ǻ�
	// 0�� ��� ���ٴ� �ǹ��̴�
	if (strcmp("BMW", "benz") == 0)
		printf("���� ���ڿ�. \n");
	else
		printf("�ٸ� ���ڿ� \n");
}

