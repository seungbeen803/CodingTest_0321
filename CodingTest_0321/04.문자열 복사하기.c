#include <stdio.h>
# include <string.h>	// strlen() �Լ� ȣ���� ����

// d : ������ ����(destination), s : ������ ���ڿ�(source)
void my_strcpy(char* d, char* s)	// ���ڿ� ��ü�� �ּڰ��� ����Ű�Ƿ� ������
{
	int length = strlen(s);
	for (int i = 0; i < length; i++)
	{
		d[i] = s[i];
	}
}

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

//int main(void)
//{
//	// src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
//	char dest[20];			// ������ ����
//	char src[] = "Hello";	// ������ ���ڿ�
//	int length = strlen(src);
//
//	for (int i = 0; i < length; i++)
//	{
//		dest[i] = src[i];
//	}
//
//	for (int i = 0; i < length; i++)
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

	my_strcpy(dest, src);

	int length = strlen(src);
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	
	return 0;
}

