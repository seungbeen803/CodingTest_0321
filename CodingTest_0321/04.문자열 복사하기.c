#include <stdio.h>
# include <string.h>	// strlen() �Լ� ȣ���� ����

//int main(void) 
//{
//	// src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
//	char dest[20];			// ������ ����
//	char src[] = "Hello";	// ������ ���ڿ�
//
//	for (int i = 0; i < 6; i++)
//	{
//		dest[i] = src[i];
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%c", dest[i]);
//	}
//
//	return 0;
//}

//int main(void)
//{
//	// src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
//	char dest[20];			// ������ ����
//	char src[] = "Hello";	// ������ ���ڿ�
//
//	for (int i = 0; i < src[i] != '\0'; i++)
//	{
//		dest[i] = src[i];
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%c", dest[i]);
//	}
//
//	return 0;
//}

int main(void)
{
	// src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
	char dest[20];			// ������ ����
	char src[] = "Hello";	// ������ ���ڿ�
	int length = strlen(src);

	for (int i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}

	return 0;
}

