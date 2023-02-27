#include<stdio.h>
int main(){

    float salary;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Your salary is: %f\n", salary);
    printf("For provident funds: %f\n", salary*0.12);
    printf("For house: %f\n",(salary - salary*0.12)*0.1 );
    printf("For children: %f", (salary - (salary - salary*0.12)*0.1)*0.2);

}