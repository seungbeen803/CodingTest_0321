#include <stdio.h>

int main(void)
{
	// 이차원배열 아무거나 만들어보고 각각의 원소를 출력하기
	char arr[3][3] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', ' I'};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

