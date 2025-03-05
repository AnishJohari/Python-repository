// CALCULATER...
#include<stdio.h>
int main(){
    short int limit=1;
    while (limit){
    short int choice,first,second;
    
    printf("************CALCULATER************\n1. ADDITION.\n2. SUBTRACTION.\n3. MULTIPLICATION.\n4. DIVISION\n\nENTER YOUR CHOICE : ");
    scanf("%d",&choice);
    if (choice == 1){
        
        printf("\n\nENTER TWO VALUES...");
        scanf("%d %d",&first,&second);
        printf("THE ADDITION OF THE GIVEN NUMBERS ARE : %d",first+second);
    }
    else if (choice == 2){
        
        printf("\n\nENTER TWO VALUES...");
        scanf("%d %d",&first,&second);
        printf("THE SUBTRACTION OF THE GIVEN NUMBERS ARE : %d",first-second);
    }
    else if (choice == 3){
        
        printf("\n\nENTER TWO VALUES...");
        scanf("%d %d",&first,&second);
        printf("THE MULTIPLICATION OF THE GIVEN NUMBERS ARE : %d",first*second);
    }
    else if (choice == 4){
        
        printf("\n\nENTER TWO VALUES...");
        scanf("%d %d",&first,&second);
        printf("THE DIVISION OF THE GIVEN NUMBERS ARE : %d",first/second);
        }
    printf("WANT TO CONTINUE : ");scanf("%d",&limit);
    if (limit ==1){continue;}else{break;}
    }
    return 0;
}