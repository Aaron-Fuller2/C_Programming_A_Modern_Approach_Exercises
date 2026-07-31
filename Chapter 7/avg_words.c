#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int characters = 0;
    int words = 0;
    int in_word = 0;   // 0 = outside a word, 1 = inside a word

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {

        if (ch != ' ') {          // non-space character
            characters++;

            if (in_word == 0) {   // we were outside a word → new word starts
                words++;
                in_word = 1;
            }

        } else {                  // space character
            in_word = 0;          // we are now outside a word
        }
    }

    float average = (float)characters / (float)words;

    printf("characters: %d\n", characters);
    printf("words: %d\n", words);
    printf("Average word length: %.2f\n", average);

    return 0;
}
