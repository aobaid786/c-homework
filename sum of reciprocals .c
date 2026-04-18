#include<stdio.h>
#include<math.h>
int main()
{
    int number,i;
    float sum =0.0;
    
    printf("enter a number :");
    scanf("%d", &number);
    for(int i=1; i<=number; i++){
        sum +=1.0/i;
    }
    printf("sum of series = %f \n", sum);
}
