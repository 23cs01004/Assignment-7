#include <stdio.h>

void main ()
{
    char word[100];
    printf("String: ");
    fgets(word, sizeof(word), stdin);
    for(int i=0; word[i] != '\0'; i++)
    {
        if((word[i]>='a' && word[i]<='z')||(word[i]>='A' && word[i]<='Z'))
        printf("%c", word[i]);
    }
}