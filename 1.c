// 27th Feb

#include<stdio.h>

int main(){
    float price = 10000, gst = 10, mrp;
    mrp = price + ((gst/100) * price);
    printf("Gst: %f \n", (gst / 100) * price);
    printf("Max price: %f", mrp);
    return 0;
}