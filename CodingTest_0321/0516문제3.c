#include <stdio.h>

int main(void)
{
	// 문자열의 길이(5가 나오도록)를 구하시오
	char str[30] = "Hello";
	int length = 0; // 문자열의 길이
	// str[i]는 인덱스의 값에 접근한다.
	//for (int i = 0; i < str[i]; i++) length++;
	//	printf("문자열의 길이 : %d", length);

	// 문자로 판별될 경우 lendgth를 카운팅(1씩 증가)
	for (int i = 0; i < 30; i++) {
		// null문자를 제외한다는 의미로 사용
		if (str[i] != '\0')
		length++;
	}
	printf("길이는 %d", length);
	return 0;
}

