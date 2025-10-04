#include "homecookedfunctions.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief encrypts string using vigenere cipher
 * 
 * @param plaintext - text to be encrypted
 * @param key - the encryption key needed 
 * @return char* - the encrypted text
 */
char *vigenere_encrypt(char *plaintext, char *key) //encryption function
{
    size_t keyword_length =strlen(key); //finding the length of the encryption keyword
    for(int i = 0; plaintext[i] != '\0'; i++) //iterates over input string
    {
        char letter = plaintext[i]; //picks the ith letter of the string
        int SHIFTER = key[i%keyword_length] - 'A'; //calculating shifter based on keyword, and wraps it around itself
        if(isalpha(letter))//checks that what is being iterated is a letter
        {
            plaintext[i] = ((letter-'A' + SHIFTER) % 26) + 'A'; //applies the encryption
        }
    }
    return plaintext; //returns encrypted string
}
/**
 * @brief decrypts string using vigenere cipher
 * 
 * @param ciphertext - text to be decrypted
 * @param key - the decryption key needed 
 * @return char* - the decrypted text
 */
char *vigenere_decrypt(char *ciphertext, char *key) //decryption function
{
    size_t keyword_length =strlen(key); //finding the length of the decryption keyword
    for(int i = 0; ciphertext[i] != '\0'; i++) //iterates over input string
    {
        char letter = ciphertext[i]; //picks the ith letter of the string
        int SHIFTER = key[i%keyword_length] - 'A'; //calculating shifter based on keyword, and wraps it around itself
        if(isalpha(letter)) //checks that what is being iterated is a letter
        {
            ciphertext[i] = ((letter-'A' - SHIFTER + 26) % 26) + 'A'; //applies the decryption
        }
    }
    return ciphertext; //returns decrypted string
}
