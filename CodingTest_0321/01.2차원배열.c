#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

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
	for (int i = 0; i < sizeof(arr) / sizeof(arr); i++)
	{
		printf("%d ", arr[i]); // 1
	}
}
