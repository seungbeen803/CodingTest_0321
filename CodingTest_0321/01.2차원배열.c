#include <stdio.h>

int main(void)
{
	// int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	// �Ǽ� 1 -> idx ���� �ʰ� + 2���� ���
	// for (int i = 1; i <= 12; i++)
	// {
		// printf("%d ", arr[i]);
	// }
	
	// for (int i = 0; i < 12; i++)
	// {
		// printf("%d ", arr[i]);
	// }

	// sizeof(arr) �迭 arr�� ũ�� : 4*12 = 48
	// sizeof(int) int�� ������ ũ�� : 4
	// for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	// {
		// printf("%d ", arr[i]); // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
	// }

	// sizeof(arr) �迭 arr�� ũ�� : 4*12 = 48
	// sizeof(arr) ���� �ϳ��� ũ�� : 4
	// for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	// {
		// printf("%d ", arr[i]); // 1
	// }

	// 2���� �迭
	int arr[3][4] = { 
		{1, 2, 3, 4},   // [0][0] : 1, [0][1] : 2, [0][2] : 3, [0][3] : 4
		{5, 6, 7, 8},   // [1][0] : 5, [1][1] : 6, [1][2] : 7, [1][3] : 8
		{9, 10, 11, 12} // [2][0] : 9, [2][1] : 10, [2][2] : 11, [2][3] : 12
	};

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", arr[i][0]);
	//	printf("%d ", arr[i][1]);
	//	printf("%d ", arr[i][2]);
	//	printf("%d ", arr[i][3]);
	//	printf("\n");
	//}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


  /*printf("%d ", arr[0][0]);
	printf("%d ", arr[0][1]);
	printf("%d ", arr[0][2]);
	printf("%d ", arr[0][3]);
	printf("\n");
	printf("%d ", arr[1][0]);
	printf("%d ", arr[1][1]);
	printf("%d ", arr[1][2]);
	printf("%d ", arr[1][3]);
	printf("\n");
	printf("%d ", arr[2][0]);
	printf("%d ", arr[2][1]);
	printf("%d ", arr[2][2]);
	printf("%d ", arr[2][3]);
	printf("\n");*/
}
