// GOPAL JEE SRIVATAVA
// ROLL NO 2303510100043
#include <stdio.h>
int main() {
   char c;
   printf("Enter any character: ");
   scanf("%c",&c);
   if((c>='a' && c<='z') || (a>='A' && a<='Z')){
       if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ){
           printf("Vowel");
       }
       else("Consonent");
   } 
   else{
       printf("Given character is not alphabet");
   }
    return 0;
}
