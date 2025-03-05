/*Write a program that reads a Celsius degree from the console and converts it to Fahrenheit
and displays the result.

The formula for the conversion is as follows:
        fahrenheit = (9 / 5) * celsius + 32*/

#include<stdio.h>
int main(){
    float temp,fahrenheit;
    printf("ENTER TEMPERATURE IN CELSIUS : ");
    scanf("%f",&temp);
    fahrenheit=(9 / 5 * temp) + 32;
    printf("THE TEMPERATURE FROM CELSIUS TO FAHRENEIT IS : %f",fahrenheit);
}