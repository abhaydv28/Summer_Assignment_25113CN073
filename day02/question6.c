#include<stdio.h>
int main(){
int n , rev = 0 , d;
printf("Enter a Number :");
scanf("%d",&n);
while(n>0){

    d = n % 10;
    rev = rev * 10 + d;
    n = n /10;
}
printf("The reverse number is : %d",rev);

    return 0;
}