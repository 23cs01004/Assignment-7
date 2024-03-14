#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter the string: ");
    gets(arr);
    int i;
    int len = strlen(arr);
    for( i=0;i<len/2;i++)
    {
      if(arr[i]==arr[len-1-i])
      continue;
      else 
      break;
    }
    
    if(i==len/2)
    {
       printf("The string is a palindrome");
    }
    else
    {
       printf("The string is not a palindrome");
    }
    return 0;
}