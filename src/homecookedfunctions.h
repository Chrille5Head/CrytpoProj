#ifndef HOMECOOKEDFUNCTIONS_H
#define HOMECOOKEDFUNCTIONS_H

//Caesar functions
char *caesar_encrypt(char *plaintext);
char *caesar_decrypt(char *ciphertext);

//Vigenere functions
char *vigenere_encrypt(char *plaintext, char *key);
char *vigenere_decrypt(char *ciphertext, char *key);

//String functions
void to_uppercase(char *text);

#endif