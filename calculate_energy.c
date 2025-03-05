/*calculate energy*/


#include<stdio.h>
int main(){
    float m,final,initial,Q;
    printf("Enter the amount of water in kilograms:");
    scanf("%f",&m);
    printf("Enter the initial temperature:");
    scanf("%f",&initial);
    printf("Enter the final temperature:");
    scanf("%f",&final);
    Q = m * (final - initial) * 4184;
    printf("The energy needed is : %f",Q);
}