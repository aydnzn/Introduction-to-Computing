#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
This code reads a sentence and a word from the user and then removes the occurrences of the word from the sentence. It uses the strncmp function to compare a portion of the sentence to the word. If a match is found, it moves the index to the end of the found word, skipping it in the output. If no match is found, it simply prints the current character. It is a more concise, readable, and safe version of the code.
*/
#define MAX_SENTENCE 300
#define MAX_WORD 20

int main(void) {
    char sentence[MAX_SENTENCE];
    char word[MAX_WORD];
    fgets(sentence, MAX_SENTENCE, stdin);
    fgets(word, MAX_WORD, stdin);

    // remove trailing newline from fgets
    sentence[strcspn(sentence, "\n")] = 0;
    word[strcspn(word, "\n")] = 0;

    int sentenceLength = strlen(sentence);
    int wordLength = strlen(word);

    for(int i = 0; i < sentenceLength; i++){
        if(strncmp(&sentence[i], word, wordLength) == 0){
            printf(" "); // If the word is found, print a space instead of the word
            i += wordLength - 1; // Move the index to the end of the matched word
        } else {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
