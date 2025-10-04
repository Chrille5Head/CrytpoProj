#include "homecookedfunctions.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


char *vigenere_encrypt(char *plaintext, char *key)
{
    size_t keyword_length =strlen(key);
    for(int i = 0; plaintext[i] != '\0'; i++)
    {
        char letter = plaintext[i];
        int SHIFTER = key[i%keyword_length] - 'A';
        if(isalpha(letter))
        {
            plaintext[i] = ((letter-'A' + SHIFTER) % 26) + 'A';
        }
    }
    return plaintext;
}

char *vigenere_decrypt(char *ciphertext, char *key)
{
    size_t keyword_length =strlen(key);
    for(int i = 0; ciphertext[i] != '\0'; i++)
    {
        char letter = ciphertext[i];
        int SHIFTER = key[i%keyword_length] - 'A';
        if(isalpha(letter))
        {
            ciphertext[i] = ((letter-'A' - SHIFTER + 26) % 26) + 'A';
        }
    }
    return ciphertext;
}
