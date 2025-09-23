/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:CODE TO CALCULATE THE VOLUME AND SURFACE AREA OF A CYLINDER
*/


#include <stdio.h>

int main()
{

const double PI = 3.14159265359;
double height;
double radius;
double volume;
double surface_area;


printf("Enter the radius\n");
scanf("%lf", &radius);

printf("Enter the height\n");
scanf("%lf", &height);

volume = PI * radius * radius;
surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);

printf("The volume is %lf:", volume);
printf("\nThe surface_area is %lf:" ,surface_area);



    return 0;
}
