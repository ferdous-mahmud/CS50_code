// Selection Sort
// Complexity : O(n^2)
// Best Case : Ω (n^2)
// Worse Case : Ω (n^2)

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int array[] = {5, 2, 1, 3, 6, 4, 8, 7, 10, 9, 12, 11, 15, 13, 14};

    size_t size = sizeof array / sizeof * array;

    int position, swap;

    for (int i = 0; i < size - 1; i++)
    {
        position = i;
        for (int m = i + 1; m < size; m++)
        {
            if (array[position] > array[m])
            {
                position = m;
            }
        }
        if (position != i)
        {
            swap = array[i];
            array[i] = array[position];
            array[position] = swap;
        }
    }

    // Printing array
    for (int j = 0; j < size; j++)
    {
        printf("%d ", array[j]);
    }

    printf("\n");


}