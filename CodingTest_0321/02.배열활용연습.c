#include <stdio.h>

//�迭 ����� �ִ񰪰� �׿� �ش��ϴ� idx���� ���Ͻÿ�
void getMax(int* arr, int length)
{
	int temp = -1; //�񱳴��
	int idx = 99;//�ε�����

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp) 
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("�ִ���:%d �ε��� ����:%d \n", temp, idx);
}

void getMin(int* arr, int length)
{
	int temp = 999;
	int idx = 999;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("�ּڰ���:%d �ε��� ����:%d \n", temp, idx);
}

int main(void) 
 {
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	//�ִ��� 14(arr[9])
	getMax(arr1, 10);

	//�ּڰ��� 14(arr[9])
	getMin(arr1, 10);

	//// �Լ� ���� ���� �ּڰ��� �� idx�� ���غ���
	//// arr1 = 4byte * 10(�迭�� ����) / �ε��� 1���� ��(4byte)
	//for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) // 40/4 = 10
	//{
	//	if (arr1[i] < temp) {
	//		temp = arr1[i];
	//		idx = i;
	//	}
	//}
	//printf("�ּڰ���:%d �ε��� ����:%d \n", temp, idx);
	return 0;
}

