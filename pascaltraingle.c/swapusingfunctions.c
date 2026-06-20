#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a,b;
        printf("enter a number :");
    scanf("%d", &a);
    printf("enter b number :");
    scanf("%d",&b);
    swap(&a,&b);
printf("the value of a is %d  \n", a);
    printf("the value of b is %d \n",b);
}