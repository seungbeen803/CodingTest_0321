#include <string.h>
#include <stdio.h>

int main(void)
{
	// 배열은 20개의 공간을 가지지만, 문자의 길이는 3
	char str[20] = "YSY";

	// 문자의 길이 구하는 함수
	int length = strlen(str);
	printf("%d \n", length);

	// 문자열 복사 strcpy(복사할 대상, 복사할 문자열)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	// 문자열 덧붙이기 strcat(덧붙일 대상, 덧붙일 문자열)
	strcat(copy_str, "BLY");
	printf("%s \n", copy_str);

	// 문자열 비교하기 strcmp
	// 0일 경우 같다는 의미이다
	if (strcmp(str, "YSY") == 0)
		printf("양서영 입니다. \n");
	else
		printf("양서영이 아닙니다. \n");
}

