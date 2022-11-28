#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* func_a(char* bundle, int start, int n) {
    char* answer = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];
    return answer;
}

int* func_b(int score1, int score2) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    if (score1 > score2) {
        answer[0] = 1;
        answer[1] = score1;
    }
    else if (score1 < score2) {
        answer[0] = 2;
        answer[1] = score2;
    }
    else {
        answer[0] = 0;
        answer[1] = score1;
    }
    return answer;
}

int func_c(char* card, int card_length) {
    int answer = 0;
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}

int* solution(int n, char* bundle) {
    // A와 B가 번갈아가며 가져간 카드를 배열에 넣습니다.
    // func_a(배열, 시작idx, 카드개수n)
    char* a_cards = func_a(bundle, 0, n);
    char* b_cards = func_a(bundle, 1, n);

    // A와 B가 획득한 점수를 구합니다.
    // func_c(a, b가 각각 뽑은 카드들의 배열, 배열의 길이)
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);

    // 획득한 점수가 큰 사람과 획득한 점수를 순서대로 배열에 담아 return 합니다.
    int* answer = func_b(a_score, b_score);
    return answer;
}

int main() {
    int n = 4;
    char* bundle = "cacdbdedccbb";
    int* ret = solution(n, bundle);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}