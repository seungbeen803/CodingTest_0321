#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[30] = "Apple";

	int length = strlen(str);
	printf("���ڿ� ���̴� %d \n", length);

	char copy_str[15];
	strcpy(copy_str, str);
	printf("���ڿ� �����ϱ� %s \n", copy_str);
	strcat(copy_str, "ipad");
	printf("���ڿ� �����̱� %s \n", copy_str);

	strcpy(copy_str, "iphone13");
	printf("���ڿ� �����ϱ� %s \n", copy_str);


	if (strcmp("BMW", "benz") == 0)
		printf("���ڿ��� �����ϴ�.");
	else
		printf("���ڿ��� �ٸ��ϴ�.");

}

