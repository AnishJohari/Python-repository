//WRITE A PROGRAMME TO FIND EVEN OR ODD NUMBER.
#include<stdio.h>
int main(){
    int num1;
    
    scanf("ENTER A NUMBER : %d",&num1);
    if (num1%2==0){
        printf("THE NUMBER IS EVEN...");
    }
    else if (num1%2 !=0)
    {
        printf("THE NUMBER IS ODD...");
    }
}