#include<stdio.h>
//\a,\f,\r,\v,\b are some some excape sequence...
//\a is a audible bell...
//\f is FORM FEED use in old time for distributing statement in two screen 
//\v is VERTICAL TAB use to print statement in next line 
//\r is  CARRIAGE RETURN replace all character before it with all character after it. 
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("the given numbers are : %d %d",a+b);
    return 0;
}
