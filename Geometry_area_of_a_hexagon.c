#include<stdio.h>
#include<math.h>
int main(){
    float s,area;
    printf("ENTER THE SIDE : ");
    scanf("%f",&s);
    area=((3*sqrt(3))/2)*s*s;
    printf("The area of the hexagon is %f",area);
}