#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[] = {"Ferdous", "Akash"};
    string numbers[] = {"+880-1401678157", "+880-1401678150"};

    for(int i = 0; i <= 2; i++)
    {
        if(strcmp(names[i], "Akash") == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
