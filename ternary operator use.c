#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    /*using ternory operator
    it will only take one statement after evaluating the condition */
    a>b && a>c ?printf("greatest value is : %d",a):printf("it is not");
    return 0;

}