#include <stdio.h>
# include <string.h>	// strlen() 함수 호출을 위해

// d : 복사할 공간(destination), s : 복사할 문자열(source)
void my_strcpy(char* d, char* s)	// 문자열 자체가 주솟값을 가리키므로 포인터
{
	int length = strlen(s);
	for (int i = 0; i < length; i++)
	{
		d[i] = s[i];
	}
}

//int main(void) 
//{
//	// src에 있는 문자열의 내용을 dest에 복사하세요
//	char dest[20];			// 복사할 공간
//	char src[] = "Hello";	// 복사할 문자열
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
//	// src에 있는 문자열의 내용을 dest에 복사하세요
//	char dest[20];			// 복사할 공간
//	char src[] = "Hello";	// 복사할 문자열
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
//	// src에 있는 문자열의 내용을 dest에 복사하세요
//	char dest[20];			// 복사할 공간
//	char src[] = "Hello";	// 복사할 문자열
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
	// src에 있는 문자열의 내용을 dest에 복사하세요
	char dest[20];			// 복사할 공간
	char src[] = "Hello";	// 복사할 문자열

	my_strcpy(dest, src);

	int length = strlen(src);
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	
	return 0;
}

