#include <stdio.h>
# include <string.h>	// strlen() 함수 호출을 위해


void my_strcat(char* s1, char* s2)
{
	// s1과 y의 인덱스 값이 5로 같다.
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	//s1[5+0] = s2[0];
	//s1[5+1] = s2[1];
	//s1[5+2] = s2[2];
	//s1[5+3] = s2[3];
	//s1[5+4] = s2[4];
	//s1[5+5] = s2[5];

	// 5의 의미는 strlen(s1), 6번 반복하는 의미는 strlen(s2)
	for (int i = 0; i < s2_len; i++)
	{
		// s1_len은 hello 문자열 길이는 5
		// s2_len를 덧붙였을 때의 인덱스의 값이 5부터 시작
		// helloyellow에서 hello의 문자열 길이 5와 y의 인덱스 값이 5로 같다
		s1[s1_len + i] = s2[i];
	}
}

int main(void)
{
	char str1[20] = "hello";
	char str2[20] = "yellow";
	// str1의 내용에 str2를 덧붙임
	my_strcat(str1, str2);
	// helloyellow가 나왔으면 좋겠다.
	printf("%s", str1);
}

