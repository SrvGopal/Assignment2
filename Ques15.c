// GOPAL JEE SRIVATAVA
// 2303510100043
#include <stdio.h>
int main() {
    int a;
    printf("Enter 1 if you want to change the temperature from fahrenite to celcius.\n");
    printf("Enter 2 if you want to change the temperature from celcius to faherenite.\n");
    printf("Enter:");
    scanf("%d",&a);
    if(a==1){
        float t;
        printf("Enter the temperature in fahrenite: ");
        scanf("%f",&t);
        printf("Temperature in celcius is %f",(t-32)*0.5556);
    }
    else if(a==2){
        float t;
        printf("Enter the temperature in celcius: ");
        scanf("%f",&t);
        printf("Temperature in fahrentite is %f",t*1.8+32);
    }
    else{
        printf("Wrong entry");
    }
    return 0;
}
