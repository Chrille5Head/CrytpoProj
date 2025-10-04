/* #include <stdlib.h>
#include <string.h> */
#include "homecookedfunctions.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
    to_uppercase(argv[1]);
    to_uppercase(argv[2]);
    to_uppercase(argv[3]);
    switch (argv[1][0]) {
        case 'E':
            if (argv[2][0] == 'C') //ENCRYPT CAESAR
            {
                printf("%s",caesar_encrypt(argv[3]));
                break;
            }
            else if (argv[2][0] == 'V') //ENCRYPT VIGENERE
            {
                printf("%s",vigenere_encrypt(argv[3],argv[4]));
                break;
            }

        case 'D':
            if (argv[2][0] == 'C')
                {
                printf("%s",caesar_decrypt(argv[3]));
                break;
                }
            else if (argv[2][0] == 'V')
                {
                printf("%s",vigenere_decrypt(argv[3],argv[4]));
                break;
                }


    }
}







// {
//     char text[100]; //buffer for user input
//     printf("Enter text:\n");
//     fgets(text, sizeof(text),stdin);
//     strip_newline(text);
//     if (!check_if_char(text))
//     {
//       return 0;
//     }
//     to_uppercase(text); //laver input til uppercase
//     printf("%s\n",caesar_encrypt(text, Caesar_SHIFTER));
//     printf("%s\n",caesar_decrypt(text, Caesar_SHIFTER));
//     printf("%s\n",vigenere_encrypt(text));
//     printf("%s\n",vigenere_decrypt(text));
//