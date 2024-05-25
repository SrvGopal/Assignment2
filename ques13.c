// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a%b==0){
        printf("First number is divisible by second number");
    }
    else if(b%a==0){
        printf("Second number is divisible by first number");
    }
    else{
        printf("Both number is not divisible by each other");
    }  
   return 0;
}
