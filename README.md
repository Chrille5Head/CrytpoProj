Program written in C

Takes CLI input of MODE, ALGORITHM, TEXT, KEY such as
'E'ncrypt - 'D'ecrypt, 'C'aesar - 'V'igenere, TEXT and KEY(for Vigenere)

Program will convert any character or string input into full upper case, reducing input errors, however keyword is still case sensitive.

Caesar cipher is +3 and Vigenere takes input keyword as encryption/decryption key.

examples;

crypto e v HELLOWORLD LEMON

SIXZBHSDZQ

e v helloworld LEMON

SIXZBHSDZQ

crypto e v HELLOWORLD lemon

YODFHNYJFW


Modularization for
 - CLI , I made a module strictly for my decider function "de_and_encryption(int argc, char *argv[])" to reduce clutter in int main() and for easier access for repeated use
 - I made separate .c files for each of my main lines of functions, being caesar.c containing my caesar cipher functions and my vigenere.c for the vigenere cipher functions,
 - I also created a .c file for my auxiliary function, stringfunction.c, for my to_uppercase(); function.
 - The purpose of this is to reduce clutter in main.c, for easy repeatable both in this project and future ones, and to keep order and structure in the code for myself and any future programmer using my code.

 
