#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    /*USING SWITCH STATEMENT 
    SWITCH CONDITION WORKS AS A IF-ELIF-ELSE BLOCK*/
    switch(day){
        case 1: printf("Monday");
                break;

        case 2:printf("Tuesday");
                break;
        case 3:printf("wednesday");
                break; 
        default:printf("\nthis is a default statement..");
    }
    //if we want to apply condition on a character or a sentence then we have to change the datatype of input variable and scanf function.
    /*switch(day){
        case 'a': printf("Monday");
                break;

        case 'b':printf("Tuesday");
                break;
        case 'c':printf("wednesday"); 
    }*/
}