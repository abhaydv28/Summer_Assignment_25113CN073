#include<stdio.h>
    int main (){
        int n , count = 0;

        printf("Enter a Number :");
        scanf("%d",&n);

        while(n>0){
            n = n/10;
            count = count + 1;
        }
        printf("count is %d",count);

        return 0;
    }