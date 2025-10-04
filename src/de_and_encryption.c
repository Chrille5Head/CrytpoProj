 #include "homecookedfunctions.h"
 #include <stdio.h>
 /**
  * @brief function that pulls together the other functions for en- and decryption
  * using CLI for inputs with cases for each.
  * 
  * @param argc - counter for total arguments in CLI input
  * @param argv - the taken user inputs from CLI
  */
 
void de_and_encryption(int argc, char *argv[]){ 
    to_uppercase(argv[1]); //takes user input and converts it to all uppercase
    to_uppercase(argv[2]);
    to_uppercase(argv[3]);
    switch (argv[1][0]) { //Takes the 2nd argument, first letter 'E'ncrypt or 'D'ecrypt
        case 'E': //Encryption selected
            
            if (argv[2][0] == 'C') //ENCRYPT 'C'aesar, 3rd argument 1st letter 'C' or 'V'
            {   
                printf("%s",caesar_encrypt(argv[3])); //prints the encrypted string to user
                break;
            }
            else if (argv[2][0] == 'V') //ENCRYPT 'V'IGENERE, 3rd argument 1st letter 'C' or 'V'
            {
                printf("%s",vigenere_encrypt(argv[3],argv[4])); //prints the encrypted string to user
                break;
            }

        case 'D': //Decryption selected
            if (argv[2][0] == 'C') //DECRYPT 'C'aesar, 3rd argument 1st letter 'C' or 'V'
                {
                printf("%s",caesar_decrypt(argv[3])); //prints the decrypted string to user
                break;
                }
            else if (argv[2][0] == 'V')//DECRYPT 'V'igenere, 3rd argument 1st letter 'C' or 'V'
                {
                printf("%s",vigenere_decrypt(argv[3],argv[4])); //prints the decrypted string to user
                break;
                }
    }
}