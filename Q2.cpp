#include <stdio.h>

int main()
{
    int a, b, c, sum;

    printf("enter three num : ");
    scanf("%d %d %d", &a, &b, &c);

                    
    sum = a + b + c;

                            
    printf("sum of %d, %d, and %d is : %d\n", a, b, c, sum);

    return 0;
}