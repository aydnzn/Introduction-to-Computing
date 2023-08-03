#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
This code reads three strings: sentence, word1, and word2 from the user, and replaces every occurrence of word1 in sentence with word2. The replace function scans through sentence looking for matches with word1, and when it finds a match, it replaces it with word2.
*/
void replace(char* sentence, char* word1, char* word2) {
    char buffer[1024] = { 0 };
    char* insert_point = &buffer[0];
    char* tmp = sentence;
    size_t word1_len = strlen(word1);
    size_t word2_len = strlen(word2);

    while (1) {
        char* p = strstr(tmp, word1);

        // If we can't find any more occurrences of word1, copy the rest of the string and stop
        if (p == NULL) {
            strcpy(insert_point, tmp);
            break;
        }

        // Copy up to the start of word1
        memcpy(insert_point, tmp, p - tmp);
        insert_point += p - tmp;

        // Copy in word2
        memcpy(insert_point, word2, word2_len);
        insert_point += word2_len;

        // Adjust pointers, move past the last instance of word1
        tmp = p + word1_len;
    }

    // Write the final result back to sentence
    strcpy(sentence, buffer);
}

void readString(char* str) {
    fgets(str, 101, stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';
}

int main(void) {
    char sentence[101];
    char word1[21];
    char word2[21];

    readString(sentence);
    readString(word1);
    readString(word2);

    replace(sentence, word1, word2);

    printf("%s\n", sentence);

    return EXIT_SUCCESS;
}
