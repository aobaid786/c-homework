#include <stdio.h>
int main()
{
    int rad;
    printf("Enter the radius of the circle: ");
    scanf("%d", &rad);

    int area;
    area = 3.14 * rad * rad;
    
    printf("The area of the circle is %f", area);
    return 0;
}
