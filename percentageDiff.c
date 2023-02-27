#include<stdio.h>
int main(){

    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    float diff = (a-b)/a;
    printf("Percentage difference is: %f",diff*100);

    return 0;
    
}