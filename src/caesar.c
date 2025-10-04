#include "homecookedfunctions.h"
#include <ctype.h>

/**
 * @brief encrypts string using caesar cipher +3
 * 
 * @param Text to be encrypted 
 * @return char* - the encrypted text
 */
char *caesar_encrypt(char *plaintext) //function for encryption using caesar cipher +3
{ 
    const int SHIFTER = 3; //sets the shifter for the caesar cipher
    for(int i = 0; plaintext[i] != '\0'; i++) //iterates over input string
    {
        char l = plaintext[i]; //picks the ith letter of the string
        if(isalpha(l)) { //checks that what is being iterated is a letter
             
            plaintext[i] = ((l-'A' + SHIFTER) % 26) + 'A'; //applies the encryption
        }
    }
return plaintext; //returns the encrypted string
}


/**
 * @brief decrypts string using caesar cipher +
 * 
 * @param ciphertext to be decrypted
 * @return char* - the decrypted text
 */

char *caesar_decrypt(char *ciphertext) //function for decryption using caesar cipher +3
{
    for(int i = 0; ciphertext[i] != '\0'; i++) //iterates over input string
    { 
        const int SHIFTER = 3; //sets the shifter for the caesar cipher 
        char l = ciphertext[i]; //picks the ith letter of the string
        if(isalpha(l)) //checks that what is being iterated is a letter
        {            
            ciphertext[i] = ((l -'A' - SHIFTER +26) % 26) + 'A'; //applies the encryption
        }
    }
    return ciphertext; //returns the decrypted string
}

