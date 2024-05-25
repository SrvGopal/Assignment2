#include <stdio.h>

int main(void){
    float a,b,c;
    
    printf("Enter the first number here ");
    scanf("%f",&a);
    printf("Enter the second  number here ");
    scanf("%f",&b);
    printf("Enter the third number here ");
    scanf("%f",&c);
    
    if (a > b && a > c) {
        printf("The number %f is greatest among the three\n",a);
    }
    else if (b > c && b > a) {
        printf("The number %f is greatest among the three\n",b);
    }
    else if (c > b && c > a) {
        printf("The number %f is greatest among the three \n",c);
        
    }
}
