//WE ARE GOING TO SWAP TWO NUMBERS BY POINTERS
#include<stdio.h>
void square(int* n);

int main(){
    int n=2;
    
    printf("%d\n",&n);
    square(&n);
    return 0;
}
void square(int *n){
    printf("%d",n);
}