/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:CODE TO CHECK WHETHER THE STUDENT IS ELIGIBLE FOR EXAMINATIONS
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sem_classes = 98;
    float attendance;
    float AvgMark;
    float sem_attend;

    printf("Enter the number of classes that you attended in this semester:\n");
    scanf("%f", &sem_attend);

    printf("Enter your average marks:\n");
    scanf("%f", &AvgMark);

    attendance = (sem_attend/sem_classes) * 100;

    if(attendance>= 75 && AvgMark>=40){
        printf("You are eligible for the exams");
    }else{
    printf("Not eligible");
    }




    return 0;
}
