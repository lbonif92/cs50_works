#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Créer une variable comprenant la hauteur de bloc
    int hauteur;

    // demander la hauteur au joueur
    do
    {
        hauteur = get_int("Hauteur: ");
    }
    while(hauteur < 1 || hauteur > 8);

    for(int i = 0; i < hauteur; i++)
    {
        for(int j = 0; j < hauteur + i + 3; j++)
        {
            if(j == hauteur || j == hauteur+1 || j+i < hauteur-1)
            printf(" ");
            else
            printf("#");
        }
    printf("\n");
    }

}