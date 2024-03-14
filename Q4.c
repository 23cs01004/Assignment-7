#include <stdio.h>

int findmax(int arr[], int n);

int main()
{
    int arr[] = {1,4,7,9,20,2};
    printf("%d", findmax(arr, 6));
    return 0;
}

int findmax(int arr[], int n) 
{
    if (n == 1)
        return arr[0];
    else 
    {
        int max = findmax(arr, n - 1);
        return (max > arr[n - 1]) ? max : arr[n - 1];
    }
}