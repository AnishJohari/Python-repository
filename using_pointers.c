#include<stdio.h>


int main(){
    int a=22;

    /* FOR CREATING POINTER WE HAVE TO USE EXTRICKS (*) SIGN AND POINTER IS NOTHING 
    BUT A UNIQUE VARIABLE WHICH STORES THE MEMORY ADDRESS OF A VARIABLE STORING DATA*/
    //*PTR IS A POINTER VARIABLE AND IT IS POINTER VARIABLE BECAUSE WE USED * WITH IT
    int *ptr =&a;
    int age = *ptr;
    printf("the pointer used in this code and the value we got is : %u",&age);
    return 0;
}