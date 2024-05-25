
// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (b > c)
        {
            printf("second number is the middle one");
        }
        else
        {
            printf("Third number is the middle one");
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("First number is the middle one");
        }
        else
        {
            printf("third number is the mmiddle one");
        }
    }
    else
    {
        if (a > b)
            printf("First number is the middle one");
        else
            printf("second number is the middle one");
    }
}
