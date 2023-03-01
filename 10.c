#include<stdio.h>
int main(){

    float salary, provident, rent_education;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Your salary is: %f\n", salary);
    provident = salary * 0.12;
    rent_education = (salary - salary * 0.12) * 0.1 + (salary - (salary - salary * 0.12) * 0.1) * 0.2;
    printf("For provident funds: %f\n", provident);
    printf("For rent & education: %f", rent_education);

}