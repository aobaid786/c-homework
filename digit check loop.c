#include<stdio.h>
int main(){
    char c;
printf("enter character :");
scanf("%c", &c);
if(c>='0' && c<'9'){
    printf("the charcter is digit ");
}
else{
    printf("not a caharcter");
}
}