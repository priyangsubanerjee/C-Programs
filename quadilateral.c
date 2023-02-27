// the angles of a quadrilateral are in the ratio 3:4:5:6

#include <stdio.h>
int main()
{
    int a=3,b=4,c=5,d=6, total= 360;
    int angle1, angle2, angle3, angle4;
    angle1 = (a*total)/(a+b+c+d);
    angle2 = (b*total)/(a+b+c+d);
    angle3 = (c*total)/(a+b+c+d);
    angle4 = (d*total)/(a+b+c+d);
    printf("The angles of the quadrilateral are: %d, %d, %d, %d", angle1, angle2, angle3, angle4);
}