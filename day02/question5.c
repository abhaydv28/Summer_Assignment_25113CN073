#include<stdio.h>
int main(){
    int n , sum = 0 , d ;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n>0){
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    } 
    
    printf("The sum of digit of number is %d",sum);



    return 0;
}