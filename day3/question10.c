// #include <stdio.h>
// int main()
// {

//     int start, end;
//     printf("Enter lower and upper limit");
//     scanf("%d%d", &start, &end);

//     printf("Prime number between %d and %d are:", start, end);

//     for (int i = start; i <= end; i++)
//     {

//         if (i <= 1)
//         {
//             continue;
//         }

//         int isPrime = 1;
//         for (int j = 2; j * j <= i; j++)
//         {

//             if (i % j == 0)
//             {

//                 isprime = 0;
//                 break;
//             }
//         }

//         if (isprime == 1)
//         {

//             printf("%d", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main() {
    int start, end;
    
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }
        
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}