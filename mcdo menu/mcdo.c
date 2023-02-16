#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int choix = 0;
    printf("==Menu== \n 1.Royal cheese \n 2.Royal deluxe\n 3.Royal bacon\n Indique le numéro de ton choix: \n");
    scanf("%i" , &choix);

    switch(choix)
    {
        case 1:
        printf("Royal cheese, pas mal \n");
        break;

        case 2:
        printf("Royal deluxe, cool \n");
        break;

        case 3:
        printf("Royal bacon, pk pas \n");
        break;

        default:
        printf("Invalid number \n");
        break;
    }
    return 0;
}