#include <stdio.h>
# include <string.h>	// strlen() 함수 호출을 위해

// 함수를 만들기 위한 3단계
// 1. 함수 이름
// 2. 매개변수
// 3. 반환형(데이터 타입)

// 문자열은 배열
// 배열이 나오면 반복문을 사용한다.
// 두 문자열의 내용이 같은지 다른지를 확인
// 같으면 0을 반환, 다르면 1을 반환
int my_strcmp(char* str1, char* str2)
{
	int str1_len = strlen(str1); // str1의 문자 갯수
	int str2_len = strlen(str2); // str2의 문자 갯수

	// 두 문자열의 길이가 다른 경우
	if (str1_len != str2_len)
		return 1;
	// 하나라도 글자가 다른 경우
	for (int i = 0; i < str1_len; i++)
	{
		if (str1[i] != str2[i])
			return 1;
	}

	return 0;
	
}

int main(void)
{
	char a[20] = "Hello";
	char b[20] = "Yello";
	if (my_strcmp(a, b) == 0)
		printf("두 문자열은 같습니다.\n");
	else
		printf("두 문자열은 다릅니다.\n");

	return 0;
}

