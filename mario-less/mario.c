#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Créer une variable comprenant la hauteur de bloc et demander au joueur
    int hauteur;


    do
    {
        hauteur = get_int("Hauteur: ");
    }
    while(hauteur < 1 || hauteur > 8);

    for(int i = 0; i < hauteur; i++)
    {
        for(int j = 0; j < hauteur; j++)
        {
            if(i+j < hauteur - 1)
            printf(".");
            else
            printf("#");
        }
    printf("\n");
    }

}