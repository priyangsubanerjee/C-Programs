// A two digit number can be obtained by using the expression (10a+b) where a and b are the digits. Write a program to obtain the digits of a two digit number. The number after reversing the digits will be (10b + a) 

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int num = 10*a+b;
    int rev = 10*b+a;
    printf("The number is: %d",num);
    printf("The reverse is: %d",rev);
    int sum = num + rev;
    int div = sum / (b - a);
    printf("The final result is: %d",div);
}