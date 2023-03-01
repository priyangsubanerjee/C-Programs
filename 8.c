// write a program to accept the diagonal of a square and find its area

#include <stdio.h>
int main(){

    int diagonal, area, perimeter;
    printf("Enter the diagonal of the square: ");
    scanf("%d", &diagonal);
    area = (diagonal*diagonal)/2;
    perimeter = 4*diagonal;
    printf("The area of the square is: %d\n", area);
    printf("The perimeter of the square is: %d", perimeter);
    return 0;
}