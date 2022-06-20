#include <stdio.h>
# include <string.h>	// strlen() �Լ� ȣ���� ����


// answer ������ ��û����� ��� �ִ� �迭
// shirt_size[0] : "XS" ������ ��û���� ��
// shirt_size[1] : "S" ������ ��û���� ��
// shirt_size[2] : "M" ������ ��û���� ��
// shirt_size[3] : "L" ������ ��û���� ��
// shirt_size[4] : "XL" ������ ��û���� ��
// shirt_size[5] : "XXL" ������ ��û���� ��

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	// ���⿡ �ڵ带 �ۼ����ּ���.
	// shirt_size�� �ִ� ��� ���Ҹ� ã�Ƽ� counting
	for (int i = 0; i < shirt_size_len ; i++) {
		// shirt_size[i]�� "XS"�� answer[0]++
		// shirt_size[i]�� "S"�� answer[1]++
		// shirt_size[i]�� "M"�� answer[2]++
		// shirt_size[i]�� "L"�� answer[3]++
		// shirt_size[i]�� "XL"�� answer[4]++
		// shirt_size[i]�� "XXL"�� answer[5]++
	}
		return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution �Լ��� ��ȯ ���� {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} �Դϴ�.\n");
}

