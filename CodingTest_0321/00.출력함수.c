#include <stdio.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f; // float을 사용할 때에는 값 뒤에 f를 붙여야한다.
	// 문자는 띄어쓰기 포함해서 11개
	// 배열의 길이는 11+1(null문자) = 12
	char mjyeol[] = "Hello World"; // 최소 12개 필요

	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n", jungsu,munja, sosu, sosu1);
	// printf("%s", mjyeol);

	// mjyeol를 %c로 찍어보자
	// printf("%c", mjyeol[0]);		// 'H'
	// printf("%c", mjyeol[1]);		// 'e'
	// printf("%c", mjyeol[2]);		// 'l'
	// printf("%c", mjyeol[3]);		// 'l'
	// printf("%c", mjyeol[4]);		// 'o'
	// printf("%c", mjyeol[5]);		// ' '
	// printf("%c", mjyeol[6]);		// 'W'
	// printf("%c", mjyeol[7]);		// 'o'
	// printf("%c", mjyeol[8]);		// 'r'
	// printf("%c", mjyeol[9]);		// 'l'
	// printf("%c", mjyeol[10]);	// 'd'
	// printf("%c", mjyeol[11]);	// null문자


	for (int i = 0; i < 12; i++)
	{
		printf("%c", mjyeol[i]);
	}
}
