#include<stdio.h>
int main(){
    int num, digit1, digit2, digit3;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);
    digit1 = num/100;
    digit2 = (num%100)/10;
    digit3 = num%10;
    printf("The digits are: \n%d\n%d\n%d", digit1, digit2, digit3);
    return 0;
}