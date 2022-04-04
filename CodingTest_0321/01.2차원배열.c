#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	// 실수 1 -> idx 범위 초과 + 2부터 출력
	// for (int i = 1; i <= 12; i++)
	// {
		// printf("%d ", arr[i]);
	// }
	
	// for (int i = 0; i < 12; i++)
	// {
		// printf("%d ", arr[i]);
	// }

	// sizeof(arr) 배열 arr의 크기 : 4*12 = 48
	// sizeof(int) int형 변수의 크기 : 4
	// for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	// {
		// printf("%d ", arr[i]); // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
	// }

	// sizeof(arr) 배열 arr의 크기 : 4*12 = 48
	// sizeof(arr) 공간 하나의 크기 : 4
	for (int i = 0; i < sizeof(arr) / sizeof(arr); i++)
	{
		printf("%d ", arr[i]); // 1
	}
}
