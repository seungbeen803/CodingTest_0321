#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int current_grade[], int last_grade[], int rank[], int arr_length, int max_diff_grade) {
    int count = 0;
    for (int i = 0; i < arr_length; i++) {
        if (current_grade[i] >= 80 && rank[i] <= arr_length / 10)
            count++;
        else if (current_grade[i] >= 80 && rank[i] == 1)
            count++;
        else if (max_diff_grade == current_grade[i] - last_grade[i])
            count++;
    }
    return count;
}

int* func_b(int current_grade[], int arr_length) {
    int* rank = (int*)malloc(sizeof(int) * arr_length);
    for (int i = 0; i < arr_length; i++)
        rank[i] = 1;
    for (int i = 0; i < arr_length; i++)
        for (int j = 0; j < arr_length; j++)
            if (current_grade[i] < current_grade[j])
                rank[i]++;
    return rank;
}

int func_c(int current_grade[], int last_grade[], int arr_length) {
    int max_diff_grade = 1;
    for (int i = 0; i < arr_length; i++) {
        if (max_diff_grade < current_grade[i] - last_grade[i])
            max_diff_grade = current_grade[i] - last_grade[i];
    }
    return max_diff_grade;
}

// 4. 장학생 수를 return 합니다.
int solution(int current_grade[], int current_grade_len, int last_grade[], int last_grade_len) {
    int arr_length = current_grade_len;
    // 1. 이번 학기 성적을 기준으로 학생별 석차를 구합니다.
    // current_grade의 길이를 표현하기 위해 arr_length를 사용
    int* rank = func_b(current_grade, arr_length);
    // 2. 각 학생의 (이번 학기 성적 - 직전 학기 성적) 중 최댓값을 구합시다.
    int max_diff_grade = func_c(current_grade, last_grade, arr_length);
    // 3. 아래 조건을 만족하는 학생을 발견하면, 장삭생 수를 1 증가시킵니다.
    // 3-1. 이번 학기 성적이 80점 이상이고, 석차가 상위 10% 이내인 경우
    // 3-2. 또는 이번 학기 성적이 80점 이상이고, 석차가 1등인 경우
    // 3-3. 또는 (이번 학기 성적 - 직전 학기 성적)이 2단계에서 구한 값과 같고, 그 값이 양수인 경우
    int answer = func_a(current_grade, last_grade, rank, arr_length, max_diff_grade);
    return answer;
}

int main() {
    int current_grade[6] = { 70, 100, 70, 80, 50, 95 };
    int current_grade_len = 6;
    int last_grade[6] = { 35, 65, 80, 50, 20, 60 };
    int last_grade_len = 6;
    int ret = solution(current_grade, current_grade_len, last_grade, last_grade_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}