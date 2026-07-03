#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        // Increasing numbers
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Decreasing numbers
        for(int j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}