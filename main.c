#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("\nSum of the two number is : %d\n", sum(a,b));

    return 0;
}
int sum(int c, int d)
{
    int sum = c+d;
    return sum;
}
