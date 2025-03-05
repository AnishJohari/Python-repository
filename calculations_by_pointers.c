#include<stdio.h>
void dowork(int a,int b,*c,*d,*e);

int main(){
    int a,b,*c,*d,*e;
    dowork(a,b,&c,&d,&e);
    printf("%d %d %d",c,d,e);
    return 0;
}
void dowork(int a,int b,int *c,int *d,int *e){

    *c=a+b;
    *d=a*b;
    *e=(a+b)/2;
}