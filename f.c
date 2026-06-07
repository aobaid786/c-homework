#include<stdio.h>
void england(){
    printf("you are in england \n");
}
void austria(){
    printf("you are in austria \n");
    england();
}
void india(){
    printf("you are in india  ");
austria();
}
int main(){
    india();
}
