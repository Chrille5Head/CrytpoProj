#include "homecookedfunctions.h"
#include <ctype.h>
/* #include <string.h>
#include <stdio.h> */

char *caesar_encrypt(char *plaintext)
{
    for(int i = 0; plaintext[i] != '\0'; i++)
    {
        char l = plaintext[i];
        if(isalpha(l)) {
            int SHIFTER = 3;
            plaintext[i] = ((l-'A' + SHIFTER) % 26) + 'A';
        }
    }
return plaintext;
}

char *caesar_decrypt(char *ciphertext)
{
    for(int i = 0; ciphertext[i] != '\0'; i++)
    {
        char l = ciphertext[i];
        if(isalpha(l))
        {
            int SHIFTER = 3;
            ciphertext[i] = ((l -'A' - SHIFTER +26) % 26) + 'A';
        }
    }
    return ciphertext;
}

