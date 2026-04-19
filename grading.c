#include<stdio.h>
int main(){
    int marks;
    printf("enter marks :");
    scanf("%d", &marks);
    switch(marks){
        case 90 ...100 : printf("grade A");
        break;
        case 80 ... <=90 : printf("grade B");
        break;
        case 70 ... <=80 : printf("grade c");
        break;
        case 60 ... <=70 : printf("grade D");
        break;
    }
}