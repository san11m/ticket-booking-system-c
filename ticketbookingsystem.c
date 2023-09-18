#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
    int a;
    int b;
    int i;
    int j;
    int k;
    int array[10] = {};
    int array_user[20] = {};
    printf("\n\n");
    printf("**Welcome to Airnib Airline Seat Reservations System**\n\n");
    for (j = 0; j < 10; j++)
    {
        printf("1. For Business Class.\n");
        printf("2. For Economic Class.\n\n");
        printf("Enter your desire class: ");
        scanf("%i", &a);
        switch (a)
        {
        case 1:

            printf("--------------------------\n");
            printf("\nBusiness class\n");
            printf("Available seats are : 1 2 3 4 5 \n");
            printf("--------------------------\n\n");
            do
            {

                printf("Pick a seat: ");
                scanf("%i", &b);
                array[j] = b;

                for (i = 0; i < j; i++)
                {
                    if (array[j] == array[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (array[j] <= 5)
            {
                printf("\n");
                printf("--------------------------\n");
                printf("Class: Business class\n");
                printf("Seat no : %i\n", array[j]);
                printf("--------------------------\n\n");
                printf("Thank You! Hava a nice journey!! \n\n");
                printf("--------------------------\n");
                printf("Exit the system\n");
                printf("or\n");
                printf("Continue :) with another reservtion!\n");
                printf("--------------------------\n");
            }

            else
                printf("\nWrong number!  No seat for you!\n\n");
            printf("--------------------------\n");
            printf("Exit the system\n");
            printf("or\n");
            printf("Continue :) with another reservtion!\n");
            printf("--------------------------\n");

            break;
        case 2:
            printf("--------------------------\n\n");
            printf("Economical class\n");
            printf("Seats available are: 6 7 8 9 10.\n\n");
            printf("--------------------------\n\n");
            do
            {
                printf("Pick a seat: ");
                scanf("%i", &b);
                printf("\n\n");
                array[j] = b;

                for (i = 0; i < j; i++)
                {
                    if (array[j] == array[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
                }
            } while (i != j);
            if (array[j] >= 6)
            {
                printf("\n");
                printf("--------------------------\n");
                printf("Class: Economical class\n");
                printf("Seat no : %i\n", array[j]);
                printf("--------------------------\n\n");
                printf("Thank You! Hava a nice journey!! \n\n");
                printf("--------------------------\n");
                printf("Exit the system\n");
                printf("or\n");
                printf("Continue :) with another reservtion!\n");
                printf("--------------------------\n");
            }
            else
                printf("\nWrong number!  No seat for you!\n\n");
            printf("--------------------------\n");
            printf("Exit the system\n");
            printf("or\n");
            printf("Continue :) with another reservtion!\n");
            printf("--------------------------\n");
            break;
        case 3:
            break;
        default:
            break;
        }
    }
    return 0;
}
