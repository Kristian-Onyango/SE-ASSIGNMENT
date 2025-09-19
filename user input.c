/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:CODE TO PROMPT THE USER TO ENTER SOME DATA
*/

#include <stdio.h>

int main(){

int ID;
int HEIGHT;
double BANK_BALANCE;

//prompt to the user to enter the required data
printf("Enter your ID\n");
scanf("%d", &ID);

printf("Enter your HEIGHT\n");
scanf("%d", &HEIGHT);

printf("Enter your BANK BALANCE\n");
scanf("%lf", &BANK_BALANCE);


    printf("\nYou entered the following data:\n");
    printf("\nID : %d\n", ID);
    printf("HEIGHT : %d cm\n", HEIGHT);
    printf("BANK BALANCE : ksh%.2lf\n", BANK_BALANCE);


return 0;
}

