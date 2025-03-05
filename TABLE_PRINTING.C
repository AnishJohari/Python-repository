#include<stdio.h>
int main(){
    int a;
    printf("which number table u want to print : ");
    scanf("%d",&a);
    for (int i =1;i<=10;i++){
        printf("%d\n",a*i);
    }
    return 0;
}