#include <string.h>
#include <stdio.h>

int main(void)
{
	// 배열은 20개의 공간을 가지지만, 문자의 길이는 3
	char str[20] = "YSY";

	// 문자의 길이 구하는 함수
	int length = strlen(str);
	printf("%d \n", length);
}

