// Linear Search
// complexity : O(n)
// best case : Ω(1)
// worse case : O(n)

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int array[] = {80, 10, 30, 20, 70, 30, 40, 60, 100};

    int value = 30;

    // Calculate array size
    size_t size = sizeof array / sizeof * array;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Found  %d\n", array[i]);
            // If all looks good then return 0
            return 0;
        }
    }
    printf("Not Found  %d\n", value);
}