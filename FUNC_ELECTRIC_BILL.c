/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:SYSTEM THAT RECEIVES UNITS AND CALCULATES THE ELECTRIC BILL
*/

#include <stdio.h>
#include <stdlib.h>

int calculateElectricBill(int number_units);

int main()
{
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    int consumed = calculateElectricBill(units);

    printf("Your total bill is Ksh. %d", consumed);

    return 0;
}

int calculateElectricBill(int number_units){

    if(number_units>0 && number_units<=100){
        int bill = 10 * number_units;
        return bill;
    }else if(number_units>100 && number_units<=200){
        int bill = 15 * number_units;
        return bill;
    }else{
        int bill = 20 * number_units;
        return bill;
    }

}
