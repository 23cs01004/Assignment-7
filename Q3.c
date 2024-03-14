#include <stdio.h>
#include <string.h>

int reverse(char *word, int size);

void main()
{
    char word[20];
    printf("String: ");
    gets(word);
    reverse(word, strlen(word)-1);
}

int reverse(char *word, int size)
{
    if (size<0)
    return 0;
    printf("%c", *(word+size));
    reverse(word, --size);
    return 1;
}

