#include<stdio.h>
int main(){
    float length,v,a;
    printf("ENTER SPEED AND ACCELERATION : ");
    scanf("%f %f",&v,&a);
    length = (v*v)/(2*a);
    printf("The minimum runway length for this airplane is %f meters",length);
}