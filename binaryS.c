// Binary Search
// Complexity : O (log n)
// Best case : Ω(1)
// Worse case : O (log n)
// ## Must have sorted array ##

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int array[] = { 6, 7, 8, 9, 10, 11, 14, 15, 17, 19, 22, 23, 25, 28, 30};

    int target = get_int("Please input target number : ");

    // Calculate array size
    size_t size = sizeof array / sizeof * array;

    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    for (int i = 0; i < end; i++)
    {
        //  When array have no element for compear
        if (start > end)
        {
            printf("Not Found  %d\n", target);
            return 1;
        }
        else
        {
            // find mid again for new seted value
            mid = start + ((end - start) / 2);

            if (array[mid] == target)
            {
                printf("Found! %d\n", target);
                return 0;
            }
            else
            {
                // mid biger then target
                if (array[mid] > target)
                {
                    end = mid - 1;
                }
                // mid lower then target
                else
                {
                    start = mid + 1;
                }
            }
        }

    }
}