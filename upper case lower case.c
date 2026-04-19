#include<stdio.h>
int main(){
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("uppercase character");  
    }
    else if(ch>='a' && ch<='z'){
        printf("lowercase character");
    }
    else{
        printf(" not  an alphabet charac");
    }
}
