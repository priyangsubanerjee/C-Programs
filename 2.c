#include<stdio.h>
int main(){

    int price = 7200, mrp1, mrp2, discount;
    mrp1 = price - 0.2 * price;
    discount = price - mrp1;
    mrp2 = mrp1 - 0.1 * mrp1;
    discount = discount + (mrp1 - mrp2);
    printf("The discount: %d\n", discount);
    printf("The sp: %d", mrp2);
    return 0;
}