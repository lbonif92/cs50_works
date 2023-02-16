#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    printf("Bonjour, bienvenue dans the happy birthday game\n");
    printf("peux tu me confirmer ton identité\n");

    // demander au joueur son prénom//
    int prenom = 1;
    do
    {
        prenom = get_int("Est-ce que tu es bien Mathilde ?\n 1. Oui 2. Non \n");
    }
    while(prenom != 1 );


    printf("Bien joue, mais n importe qui aurait pu y repondre\n"
    "pour confirmer ton identite et obtenir une surprise,\n"
    "tu vas devoir répondre correctement 3 questions suivantes:\n"
    "#\n#\n#\n#\n");

        // Epreuve 1:

    printf("###### QUIZZ n°1 ###### \n"
   " Quelle proposition est vrai ?\n"
    "1. Une surjeteuse permet de coudre d'autres tissus.\n"
    "2. La viscose a un rendu rigide.\n"
    "3. On peut trouver du stuff de couture dans une mercerie.\n" );

        int quizz1 = 3;
    do
    {
        quizz1 = get_int("ta reponse: ");
    }
    while(quizz1 !=3);

        // Epreuve 2:

    printf("###### QUIZZ n°2 ###### \n"
   " Quelle proposition est vrai ?\n"
    "1. N'oubliez pas le gingembre avec les sushis\n"
    "2. Vive le fromage !\n"
    "3. Le houmous, c'est la vie !\n " );

        int quizz2 = 3;
    do
    {
        quizz2 = get_int("ta reponse: ");
    }
    while(quizz2 !=3);

            // Epreuve 3:

    printf("###### QUIZZ n°3 ###### \n"
   " Quelle proposition est fausse ?\n"
    "1. Mathilde, la reine du bodyattack\n"
    "2. Mathilde, l'ambassadrice de 'spitz & spritz'\n"
    "3. Mathilde, la patience incarnée\n " );

        int quizz3 = 3;
    do
    {
        quizz3 = get_int("ta reponse: ");
    }
    while(quizz3 !=3);

    printf("Bien joué Mathilde, tu as bien confirmé ton identité.\n"
    "Je te souhaites un bon anniversaire et je t'invite à ouvrir ton premier cadeau dans le dossier 'hb'.\n"
    "Un second cadeau arrivera dans ta boîte au lettre la semaine prochaine. Bisous\n");

    // Open CSV file
    FILE *file = fopen("cartecadeauAB.png", "r");
    if (!file)
    {
        return 1;
    }
}
