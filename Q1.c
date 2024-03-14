#include <stdio.h>
#include <ctype.h>

void main()
{
    char word[100];
    char chr;
    printf("Enter string: ");
    fgets(word, sizeof(word), stdin);
    printf("Enter character: ");
    scanf(" %c", &chr);
    int freq=0;
    for (int i=0; word[i] != '\0'; i++)
    {
        if(tolower(word[i])==tolower(chr))
        freq++;
    }
    printf("Frequency of %c is: %d", chr, freq);
}