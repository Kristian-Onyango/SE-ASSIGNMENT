/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:CODE TO CALCULATE THE WATER BILL OF CUSTOMERS
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    double units;
    double bill;


    printf("Enter number of units consumed:\n");
    scanf("%lf", &units);

    if(units>=0 && units<=30){
        bill = units * 20;
        printf("Your total bill is KES %.2lf", bill);
    }else if(units >30 && units <=60){

        bill = units * 25;
        printf("Your total bill is KES %.2lf", bill);

    }else{

        bill = units * 30;
        printf("Your total bill is KES %.2lf", bill);

return 0;
    }



    return 0;
}

