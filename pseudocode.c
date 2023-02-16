#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int hauteur = get_int("hauteur ?");
    int i = 0;

    for(i = 0; i < (hauteur-1); i++)
    printf("#");
}

