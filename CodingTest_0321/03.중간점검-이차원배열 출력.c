#include <stdio.h>

int main(void)
{
	// �������迭 �ƹ��ų� ������ ������ ���Ҹ� ����ϱ�
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

