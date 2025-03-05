#include<stdio.h>
#include<math.h>
int main(){
    //printing armstrong number.
    int n,temp,sum=0,digits=0,r,d=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp=temp/10;
        digits++;
    }
    temp=n;
    while(temp>0){
        r=temp%10;
        sum=sum+pow(r,d);
        temp=temp/10;
    }
    temp=n;
    if (temp==sum){
        printf("Armstrong number...");
    }
    else{
        printf("Not a Armstrong Number...");
    }
    return 0;
}