#include <stdio.h>

int main(void)
{
	// ���ڿ��� ����(5�� ��������)�� ���Ͻÿ�
	char str[30] = "Hello";
	int length = 0; // ���ڿ��� ����
	// str[i]�� �ε����� ���� �����Ѵ�.
	//for (int i = 0; i < str[i]; i++) length++;
	//	printf("���ڿ��� ���� : %d", length);

	// ���ڷ� �Ǻ��� ��� lendgth�� ī����(1�� ����)
	for (int i = 0; i < 30; i++) {
		// null���ڸ� �����Ѵٴ� �ǹ̷� ���
		if (str[i] != '\0')
		length++;
	}
	printf("���̴� %d", length);
	return 0;
}

