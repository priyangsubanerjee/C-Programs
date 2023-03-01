// take input in days convert to year months & days

#include<stdio.h>
int main(){

    int days, years, months, daysLeft;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days/365;
    months = (days%365)/30;
    daysLeft = (days%365)%30;
    printf("The number of years is: %d\n", years);
    printf("The number of months is: %d\n", months);
    printf("The number of days is: %d\n", daysLeft);
    return 0;
}