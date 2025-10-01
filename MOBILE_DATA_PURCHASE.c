#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* char packages[4][2] = {

    {100MB,50},
    {500MB,20},
    {1GB,350},
    {2GB,600}

   }*/

   int choice;
   printf("The following are the packages offerred:\n");

   printf("\nOption\tBundle\tCost(KES)\n");
   printf("1\t100MB\t50\n");
   printf("2\t500MB\t200\n");
   printf("3\t1GB\t350\n");
   printf("4\t2GB\t600\n");


   printf("Select choice (1-4):\n");
   scanf("%d", &choice);

   switch(choice){
   case 1:
    printf("You selected 100MB @KES 50");
    break;
   case 2:
    printf("You selected 500MB @KES 200");
    break;
   case 3:
    printf("You selected 1GB @KES 350");
    break;
   case 4:
    printf("You selected 2GB @KES 600");
    break;
   default:
    printf("Invalid choice.");

   }


    return 0;
}
