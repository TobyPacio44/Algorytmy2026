#include <stdio.h>
#include "CountVocal.h"

int main(void)
{
    char text[100];
    int count = 0;

    printf("Input: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    CountVocal(text, &count);

    printf("Vocal Count: %d\n", count);

    return 0;
}

void CountVocal(char* text, int* count)
{
    int i = 0;
    *count = 0;

          //Check if current is empty
    while (text[i] != '\0') {
        switch (text[i]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            (*count)++;
            break;
        }

        i++;
    }
}