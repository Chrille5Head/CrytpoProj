 #include "homecookedfunctions.h"
 #include <stdio.h>
 
 
void de_and_encryption(int argc, char *argv[]){
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