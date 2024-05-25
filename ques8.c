// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main() {
    int p,t;
    float r;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of intrest: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%d",&t);
    float temp=p*r*t;
    printf("Simple intrest is %f",temp/100);
    return 0;
}
