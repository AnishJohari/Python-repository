#include<stdio.h>
#include<math.h>
int main(){
    float h,w;
    printf("ENTER HEIGHT IN INCHES FIRST THEN WEIGHT IN POUNDS : ");
    scanf("%f %f",&w,&h);
    printf("BMI IS %f",(w*0.45359237)/ pow((h*0.0254),2));
}