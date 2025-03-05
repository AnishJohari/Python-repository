#include<stdio.h>
int main(){
    int marks[3];
    printf("enter a number : ");
    scanf("%d",&marks[0]);
        
    printf("enter a number : ");
    scanf("%d",&marks[1]);
        
    printf("enter a number : ");
    scanf("%d",&marks[2]);
    
    printf("1st number : %d second number : %d third number : %d",marks[0],marks[1],marks[2]);
    
    return 0;
}