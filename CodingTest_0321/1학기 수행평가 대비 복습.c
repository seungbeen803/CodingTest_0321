#include <string.h>
#include <stdio.h>

int main(void)
{
	// 배열은 20개의 공간을 가지지만, 문자의 길이는 3
	char str[30] = "samgyetang";

	// 문자의 길이 구하는 함수;
	int length = strlen(str);
	printf("삼계탕의 길이는 %d\n", length);

	// 문제2 copy_str에 "iceshu" 집어넣기(복사하기)
	char copy_str[30];
	strcpy(copy_str, "iceshu");
	printf("복사한 문자열은 %s \n", copy_str);

	// 문제3 copy_str "delicious" 덧붙이기
	strcat(copy_str, " delicious");
	printf("덧붙인 문자열은 %s \n", copy_str);

	// 문제4 "BMW"와 "benz"의 두 문자열이 같은지 다른지를 판별
	// 0일 경우 같다는 의미이다
	if (strcmp("BMW", "benz") == 0)
		printf("같은 문자열. \n");
	else
		printf("다른 문자열 \n");
}

