// reverse array code practice

#include <stdio.h>

void reverseArr(int array[], int size)
{
    int temp;

    for (int i = 0; i < size / 2; i++) // we need to divide the size of array(which is 5, in this case) as if we will run the loop for entire array, it'll transfer the elements again after passing the middle value!
    {
        temp = array[i];                  // copying the first element of array into temp variable
        array[i] = array[(size - 1) - i]; // as the first element has been saved, the last element will be copied into the first element
        array[(size - 1) - i] = temp;     // and now as we've transferred last element into first, the temp value(first value) will be transferred to the last element!
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]); // the array is now reversed, but we want to print it!
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverseArr(arr, sizeof(arr) / 4); // the array size is 20(5 elements of 4 bits) hence, we need to divide it with 4 to get the total amount of elements
    return 0;
}