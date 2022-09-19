#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[30] = "Apple";

	int length = strlen(str);
	printf("문자열 길이는 %d \n", length);

	char copy_str[15];
	strcpy(copy_str, str);
	printf("문자열 복사하기 %s \n", copy_str);
	strcat(copy_str, "ipad");
	printf("문자열 덧붙이기 %s \n", copy_str);

	strcpy(copy_str, "iphone13");
	printf("문자열 복사하기 %s \n", copy_str);


	if (strcmp("BMW", "benz") == 0)
		printf("문자열이 같습니다.");
	else
		printf("문자열이 다릅니다.");

}

