#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 50

// A sentence or word checked by enum must only be Palindrome or Non-Palindrome
typedef enum
{
    PALINDROME,
    NON_PALINDROME
} CharControl;

int main()
{
    char mySentence[MAX_SIZE];
    char *ch1, *ch2;

    printf("Please enter a sentence/word: ");
    fgets(mySentence, MAX_SIZE, stdin);

    // Remove the newline character from 'mySentence'
    mySentence[strcspn(mySentence, "\n")] = '\0';

    // 'ch2' holds the last character of 'mySentence'
    ch2 = mySentence + strlen(mySentence) - 1;

    CharControl Status;
    for (ch1 = mySentence; ch1 < ch2; ch1++, ch2--)
    {
        if (*ch1 != *ch2)
        {
            Status = NON_PALINDROME;
            break;
        }
        else
        {
            Status = PALINDROME;
        }
    }

    Status == PALINDROME
    ? printf("The sentence/word '%s' is a palindrome.\n", mySentence)
    : printf("The sentence/word '%s' is not a palindrome.\n", mySentence);

    return 0;
}
