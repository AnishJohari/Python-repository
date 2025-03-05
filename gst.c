#include<stdio.h>

int main(){
    float gst[3];
    printf("Enter a number : ");
    scanf("%f",&gst[0]);
    printf("Enter a number : ");
    scanf("%f",&gst[1]);
    printf("Enter a number : ");
    scanf("%f",&gst[2]);

    printf("GST : %f ",(gst[0]+(0.18*gst[0])));
    printf("GST : %f ",(gst[1]+(0.18*gst[1])));
    printf("GST : %f ",(gst[2]+(0.18*gst[2])));
    return 0;
}