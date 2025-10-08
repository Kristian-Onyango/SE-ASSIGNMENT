/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:PROGRAM FOR CHECKING THE PASSWORD INPUT
*/

#include <stdio.h>

int main(){

int password = 1234;
int passcode;

do{

    printf("Enter the password: ");
    scanf("%d", &passcode);
}while(password != passcode);
printf("Access Granted");

return 0;
}
