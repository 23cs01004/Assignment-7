#include <stdio.h>

int check(char str[], char sub[]);

int main() 
{
    char str[100], sub[100];
    printf("string: ");
    gets(str);
    printf("substring: ");
    gets(sub);
    if (check(str, sub))
        printf("The substring exists in the string");
    else
        printf("The substring does not exist in the string");

    return 0;
}

int check(char str[], char sub[]) 
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {

        j = 0;
        while (sub[j] != '\0' && str[i + j] == sub[j])
            j++;
        if (sub[j] == '\0')
            return 1;
    }
    return 0;
}