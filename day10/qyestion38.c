#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Spaces
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Stars
        for(int j = 0; j < 2*(n-i)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}