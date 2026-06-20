#include<stdio.h>
void swap(int* a,int* b){
    int temp=a;
    a=b;
    b=temp;
    return 0;

}
int main(){
int a=2;
int b=3;
int *x=&a;
int *y=&b;
swap(&a,&b);
}