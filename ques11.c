// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=0 && age<=12){
        printf("Child")
    }
    else if(age>=13 && age<=19){
        printf("Teenager");
    }
    else if(age>=20 && age<=59){
        printf("Adult");
    }
    else{
        printf("Senior");
    }
}
