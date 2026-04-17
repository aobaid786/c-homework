#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("enter a number : ");
    scanf("%d",&number);
    printf("factor  of number are : \n");
    for(int i=1; i<=number; i++){
        if(number%i==0){
        printf("%d \n",i );
    }
}
}

   