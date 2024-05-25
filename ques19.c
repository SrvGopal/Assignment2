// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the third number: ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("First number is greatest");
    }
    else if (b > a && b > c && b > d)
    {
        printf("Second number is greatest");
    }
    else if (c > a && c > b && c > d)
    {
        printf("Third number is the highest");
    }
    else
    {
        printf("Fourth number is highest");
    }
    return 0;
}
