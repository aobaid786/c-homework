#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("enter number b :");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf(" value of a = %d, value of b = %d",a,b);
}