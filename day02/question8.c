#include<stdio.h>
int main(){
    int n , rev = 0 , temp , d ;
    printf("Enter a number :");
    scanf("%d",&n);
    temp = n ;
    while(n>0){
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    if(rev==temp){
        printf("The given number is palindrome number");
    }
    else{
        printf("The given number number is  not palindrome number");
    }


    return 0 ;
}