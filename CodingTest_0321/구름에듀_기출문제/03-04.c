#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word) {
    int count = 0;
    // words[0] : "CODE", words[1] : "COED", words[3] : "CDEO"
    for (int i = 0; i < words_len; i++) {
        if (word[0] != words[i][0])
            count++;         
        if (word[1] != words[i][1])
            count++;         
        if (word[2] != words[i][2])
            count++;
        if (word[3] != words[0][3])
            count++;
    }

    if (word[0] != words[1][0])
        count++;
    if (word[1] != words[1][1])
        count++;
    if (word[2] != words[1][2])
        count++;
    if (word[3] != words[1][4])
        count++;

    if (word[0] != words[2][0])
        count++;
    if (word[1] != words[2][1])
        count++;
    if (word[2] != words[2][2])
        count++;
    if (word[3] != words[2][4])
        count++;

    return count;
}

int main() {
    char* words[3] = { "CODE", "COED", "CDEO" };
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}