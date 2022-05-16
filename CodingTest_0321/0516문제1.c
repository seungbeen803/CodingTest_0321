#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
}

