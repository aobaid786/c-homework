#include<stdio.h>
int main()
{
    int isSunday;
    int isSnowing;

    printf("what day its today :");
    scanf("%d", isSunday);
    printf("is it snowing :");
    scanf("%d", isSnowing);
    printf("%d", isSunday && isSnowing);
        