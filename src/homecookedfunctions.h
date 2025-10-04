/**
 * @file homecookedfunctions.h
 * @author https://github.com/Chrille5Head
 * @brief funtions declarations for caesar and vigenere ciphers, and string function 
 * 
 * Contains all the encryption/decryption function prototypes used in this crypto project.
 */




#ifndef HOMECOOKEDFUNCTIONS_H
#define HOMECOOKEDFUNCTIONS_H

//Caesar functions
/**
 * @brief encrypts input using caesar +3 cipher
 * 
 * @param plaintext  - the text that is taken as input for encryption 
 * @return char* returns the encrypted text
 */
char *caesar_encrypt(char *plaintext);

/**
 * @brief Decrypts an input using caesar +3 cipher
 * 
 * @param ciphertext - the encrypted input that needs decryption
 * @return char* - the decrypted text as output
 */
char *caesar_decrypt(char *ciphertext);

//Vigenere functions
/**
 * @brief encrypts input using vigenere cipher
 * 
 * @param plaintext  - the text that is taken as input for encryption
 * @param key - they keyword used to make the encryption
 * @return char* - returns the encrypted text
 */
char *vigenere_encrypt(char *plaintext, char *key);

/**
 * @brief - Decrypts an input using vigenece cipher
 * 
 * @param ciphertext - the encrypted input that needs decryption
 * @param key - the needed key for decryption, same as was used for the encryption
 * @return char* - the decrypted text as output
 */
char *vigenere_decrypt(char *ciphertext, char *key);

//Function called in main to run the main program for en- and decrypting
void de_and_encryption(int argc, char *argv[]);

//String functions
/**
 * @brief takes string as input, outputs uppercase string
 * 
 * @param text - the string that needs to be converted to full uppercase
 */
void to_uppercase(char *text);

#endif