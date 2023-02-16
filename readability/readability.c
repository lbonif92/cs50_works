#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string text = get_string("Text: ");

    // nombre de lettre //
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        letters++;
    }
    printf("nb de lettres: %i \n", letters);

    // nombre de mots //
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
        {
            if(text[i] == ' ')
            words++;
        }
    printf("nb de words: %i \n", words);

    // nombre de phrases //
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
        {
            if(text[i] == '.' || text[i] ==  '!' || text[i] ==  '?')
            sentences++;
        }
    printf("nb de sentences: %i \n", sentences);

    // formule coleman //

    float calcul = 0.0588 *letters/  words*100 - 0.296 * sentences / words*100 - 15.8;
    int index = calcul;
    printf("grade level is %i \n", index);
}