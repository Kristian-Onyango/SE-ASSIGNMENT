/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:HOTEL MANAGEMENT SYSTEM FOR DISPLAYING THE ROOMS VACANT AND OCCUPID IN A HOTEL
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int revenue[7] = {25000, 40000, 50000, 60000, 45000, 70000, 65000};

    int weekly_revenue= 0;
    int daily_revenue = 0;

    for(int i=0; i<7; i++){
        weekly_revenue = weekly_revenue + revenue[i];

    }

    daily_revenue = weekly_revenue/7;

    printf("==================================\n");
    printf("      HOTEL MANAGEMENT SYSTEM\n");
    printf("==================================\n");
    printf("\nYour total weekly revenue is: KSH.%d\n", weekly_revenue);
    printf("Your average daily_revenue is: KSH.%d\n", daily_revenue);

    int occupancy[5][10] = {

            {1,0,0,0,0,0,1,1,1,0},
            {0,0,0,0,1,1,1,0,1,1},
            {1,1,1,1,1,1,1,0,0,0},
            {0,0,0,0,1,1,1,0,0,1},
            {0,1,0,1,1,0,1,0,0,1}
    };

    int sum_vacant=0;
    int sum_occupied=0;

    for(int i=0; i<5; i++){

        for(int j=0; j<10; j++){

            if(occupancy[i][j]==1){
                sum_occupied++;
            }else{
                sum_vacant ++;
            }

        }

    }
    printf("\nThe number of occupied rooms are: %d\n", sum_occupied);
    printf("The number of vacant rooms are: %d\n", sum_vacant);


    int chain [3][5][10]={

        {
            {1,0,0,0,0,0,1,1,1,0},
            {0,0,0,0,1,1,1,0,1,1},
            {1,1,1,1,1,1,1,0,0,0},
            {0,0,0,0,1,1,1,0,0,1},
            {0,1,0,1,1,0,1,0,0,1}},
        {
            {1,0,0,0,0,0,1,1,1,0},
            {0,0,0,0,1,1,1,0,1,1},
            {1,1,1,1,1,1,1,0,0,0},
            {0,0,0,0,1,1,1,0,0,1},
            {0,1,0,1,1,0,1,0,0,1}
        },
        {
            {1,0,0,0,0,0,1,1,1,0},
            {0,0,0,0,1,1,1,0,1,1},
            {1,1,1,1,1,1,1,0,0,0},
            {0,0,0,0,1,1,1,0,0,1},
            {0,1,0,1,1,0,1,0,0,1}}
    };


         int occupied=0;

         for(int i=0; i<3; i++){
            for(int j=0; j<5; j++){
                for(int k=0; k<10; k++){
                    if(chain[i][j][k]==1){
                        occupied++;
                    }
                }
            }
         }
            printf("\nThe total number of occupied rooms across all the three branches is: %d", occupied);
    return 0;
}
