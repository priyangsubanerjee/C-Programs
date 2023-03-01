#include<stdio.h>
int main(){
    float base, da=0.3, hra=0.125, pf=0.1, gross;
    float DA, HRA, PF;
    printf("Enter your base salary: ");
    scanf("%f", &base);
    DA = base * da;
    HRA = base * hra;
    PF = base * pf;
    gross = base + DA + HRA;
    printf("Your net pay is: %f", gross-PF);
}