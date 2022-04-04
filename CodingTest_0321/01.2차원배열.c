#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12 };

	// 실수 1 -> idx  범위 초과 + 2부터 출력
	// for (int i = 1; i <= 12; i++)
	// {
		// printf("%d", arr[i]);
	// }

	for (int i = 0; i <= 12; i++) 
	{
		printf("%d", arr[i]);
	}
}