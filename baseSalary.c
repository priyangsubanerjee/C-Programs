#include<stdio.h>
int main(){

    int base = 350, fine = 30;
    printf("Salary for days present: %d \n", base * 25);
    printf("Salary for days absent: %d \n", (base - fine) * 5);
    printf("In hand: %d", (base * 25) + (base - fine) * 5);
    return 0;
}