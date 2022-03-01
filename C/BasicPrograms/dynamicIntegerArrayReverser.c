#include <stdio.h>

void reverse(int *arr, int arrSize);

void main()
{
    char arr[] = {1, 2, 3, 4, 5};

    int arraySize = (sizeof(arr)) / 4;
    reverse(arr, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d %d\n", i + 1, arr[i]);
    }
}

void reverse(int *arr, int arrSize)
{
    int temp;
    for (int i = 0; i < (arrSize / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = temp;
    }
}
// Logic: arr[i] should be replaced with arr[arrSize - i - 1]