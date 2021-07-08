// Bubble sort
// Complexity : o(n^2)
// Best case : Ω(n)
// Worse case :

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int array[] = {5, 2, 1, 3, 6, 4, 8, 7, 0, 10, 9, 12, 11, 15, 13, 14};

    size_t size = sizeof array / sizeof * array;
    int tmpsize = size;
    // counter for testing algorithm performance
    int counter = 0;

    for (int i = 0; i < size - 1; i++)
    {
        counter ++;
        if (array[i] > array[i + 1])
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }

        if (i == size - 2)
        {
            i = 0;
            size -= 1;
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int j = 0; j < tmpsize; j++)
    {
        printf("%d ",array[j]);
    }
    printf("\nCounter = %d\n",counter);
}

