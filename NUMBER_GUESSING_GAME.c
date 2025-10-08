/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:NUMBER GUESSING GAME
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int Number;
    int counter=0;
    int max = 20;
    int min = 1;
    int randomNum = (rand() % (max-min+1)+ min);

 do{
    printf("Enter a Number: ");
    scanf("%d", &Number);

   if(Number > randomNum){
    printf("Too high!\n");

   }else if(Number < randomNum){
    printf("Too low!\n");

   }else{
    printf("Congratulations!\n");
   }

   counter = counter + 1;
    if(Number == randomNum){
    printf("The total number of attempts was: %d", counter);
 }

 }while(Number != randomNum);


    return 0;
}
