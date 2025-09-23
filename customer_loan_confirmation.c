/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:CODE TO CHECK WHETHER THE CUSTOMER IS ELIGIBLE FOR A LOAN OR NOT
*/


#include <stdio.h>


int main()
{

   int age;
   double income;


   printf("Enter your age:");
   scanf("%d", &age);

   printf("Enter your annual income:sh.");
   scanf("%lf", &income);

   if (age>=21 && income >= 21000){
    printf("Congragulations you qualify for a loan\n");
   }else{
   printf("Unfortunatley,we are unable to offer you a loan at this time\n");

   }



    return 0;
}
