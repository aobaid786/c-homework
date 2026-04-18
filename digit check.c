#include<stdio.h>
int main()
{
    char c;
    printf("enter a character :");
    scanf("%c", &c);
    printf("%d", c>='0' && c<='9');
}
