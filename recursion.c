// Recursion
// Problem : Factorial using recursion
// Complexity :
// Best Case :
// Worse Case :

#include<stdio.h>
#include<cs50.h>

// Hint for compiler
int fact(int n);

int main(void)
{
    // Recursive function
    // func_type func_name(return_type)
    // {
    //     base case
    //
    //     recursive case
    // }

    int number = get_int("Please input any number : ");
    int result = fact(number);

    printf("Factorial of %d = %d\n",number, result);

}

int fact(int n)
{
    // base case
    if (n == 1)
        return 1;
    // recursive case
    else
        return n * fact (n - 1);
}
