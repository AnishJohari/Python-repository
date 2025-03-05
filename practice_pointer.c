#include<stdio.h>
int main(){

    // int x;
    // int *ptr;
    // ptr=&x;
    // *ptr=0;

    // printf("pointer=  %d\n",ptr);/*IN THIS LINE THE POINTER VARIABLE IS WRITTEN
    //                                                 WITH STAR SO IT WILL GUIDE TH COMPILER TO TAKE THE VALUE FRO THE X VARIABLE AND DISPLAY IT*/
    //                                                 //WITHOUT STAR IT WILL DISPLAY THE VALUE OF POINTER VARIABLE STORING INSIDE IT.
    // printf("x=  %d\n",x);
    // *ptr+=5;
    // printf("x=%d\n",*ptr);
    // printf("pointer=%d\n",ptr);
    // (*ptr)++;
    // printf("x= %d",*ptr);
    // return 0;
    int i;
    printf("ENTER NUMBER : ");
    scanf("%d",i);
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d",**pptr);
    
    return 0;
}