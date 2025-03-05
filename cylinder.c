/*Write a program that reads in the radius and length of a cylinder and computes the area and
volume using the following formulas:

area = radius * radius * π
volume = area * length*/
#include<stdio.h>

int main(){
    float radius,height,area,volume;
    printf("ENTER RADIUS AND LENGTH OF THE CIRCLE :");
    scanf("%f %f",&radius,&height);
    area=(22/7)*radius*radius;
    volume=area*height;
    printf("the area of cylinder is : %f  and volume of cylinder is : %f",area,volume);

    return 0;
}