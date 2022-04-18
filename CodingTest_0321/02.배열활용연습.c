#include <stdio.h>

//배열 요소중 최댓값과 그에 해당하는 idx값을 구하시오
void getMax(int* arr, int length)
{
	int temp = -1; //비교대상
	int idx = 99;//인덱스값

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp) 
		{
			temp = arr[i];
			idx = i;
		}
	}
	printf("최댓값은:%d 인덱스 값은:%d \n", temp, idx);
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
	printf("최솟값은:%d 인덱스 값은:%d \n", temp, idx);
}

int main(void) 
 {
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	//최댓값은 14(arr[9])
	getMax(arr1, 10);

	//최솟값은 14(arr[9])
	getMin(arr1, 10);

	//// 함수 쓰지 말고 최솟값과 그 idx를 구해보자
	//// arr1 = 4byte * 10(배열의 길이) / 인덱스 1개의 값(4byte)
	//for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) // 40/4 = 10
	//{
	//	if (arr1[i] < temp) {
	//		temp = arr1[i];
	//		idx = i;
	//	}
	//}
	//printf("최솟값은:%d 인덱스 값은:%d \n", temp, idx);
	return 0;
}

