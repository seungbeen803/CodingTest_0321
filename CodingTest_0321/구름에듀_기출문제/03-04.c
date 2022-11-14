#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word) {
    int count = 0;
    // words[0] : "CODE", words[1] : "COED", words[3] : "CDEO"
    for (int i = 0; i < words_len; i++) {
        for (int j = 0; j < strlen(word); j++){
            if (word[0] != words[i][0])
                count++;
            if (word[1] != words[i][1])
                count++;
            if (word[2] != words[i][2])
                count++;
            if (word[3] != words[i][3])
                count++;
        }
    }

    return count;
}

int main() {
    char* words[3] = { "CODE", "COED", "CDEO" };
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}