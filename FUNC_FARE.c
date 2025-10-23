/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:PROGRAM FOR WITHDRAWING CASH IN ATM
*/

#include <stdio.h>
#include <stdlib.h>

int calculateFare(int distance_travelled);

int main()
{
    int distance;
    printf("Enter the distance traveled in km(kilometres): ");
    scanf("%d", &distance);

    int fare_spent = calculateFare(distance);

    printf("Your total fare is Ksh. %d", fare_spent);

    return 0;
}

int calculateFare(int distance_travelled){

    int transport = 50 * distance_travelled;
    return transport;

}
