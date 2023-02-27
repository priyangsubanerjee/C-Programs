#include<stdio.h>
int main(){

    int price = 7200, mrp1, mrp2;
    mrp1 = price - 0.2 * price;
    mrp2 = mrp1 - 0.1 * mrp1;
    printf("The maximum price after discount: %d", mrp2);
    return 0;
}