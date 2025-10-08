/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:PROGRAM FOR WITHDRAWING CASH IN ATM
*/

#include <stdio.h>

int main(){

int account_balance;
int new_balance;
int withdraw;

printf("Enter your account balance: ");
scanf("%d", &account_balance);


while(account_balance > 0 ){


    printf("Enter the amount to withdraw: ");
    scanf("%d", &withdraw);
    new_balance = account_balance - withdraw;
    account_balance = new_balance;
    printf("Your new balance is: %d\n", new_balance);

}

printf("Insufficient funds\n");
return 0;
}
