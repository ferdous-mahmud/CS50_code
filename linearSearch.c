// Linear Search
// 3 June 2021
#include <stdio.h>
#include <cs50.h>

// hint for compiler
bool linearSearch(int arr[], int givenNumber, int size);

int main(void)
{
    int arr[] = {1, 2 , 6 , 4 , 8, 9 , 0, 5};
    bool result = linearSearch(arr, 2, 9);
    fputs(result ? "Found\n" : "Not Found\n", stdout);
}

// function for linerar search
bool linearSearch(int arr[], int givenNumber, int size)
{
    for(int i = 0; i <= size; i++){
        if(givenNumber == arr[i])
        {
            return true;
            break;
        }
    }
    return false;
}