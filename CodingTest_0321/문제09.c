#include <stdio.h>
# include <string.h>	// strlen() 함수 호출을 위해


// answer 사이즈 신청결과를 담고 있는 배열
// shirt_size[0] : "XS" 사이즈 신청자의 수
// shirt_size[1] : "S" 사이즈 신청자의 수
// shirt_size[2] : "M" 사이즈 신청자의 수
// shirt_size[3] : "L" 사이즈 신청자의 수
// shirt_size[4] : "XL" 사이즈 신청자의 수
// shirt_size[5] : "XXL" 사이즈 신청자의 수

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	// 여기에 코드를 작성해주세요.
	// shirt_size에 있는 모든 원소를 찾아서 counting
	for (int i = 0; i < shirt_size_len ; i++) {
		// shirt_size[i]가 "XS"면 answer[0]++
		// shirt_size[i]가 "S"면 answer[1]++
		// shirt_size[i]가 "M"면 answer[2]++
		// shirt_size[i]가 "L"면 answer[3]++
		// shirt_size[i]가 "XL"면 answer[4]++
		// shirt_size[i]가 "XXL"면 answer[5]++
	}
		return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}

