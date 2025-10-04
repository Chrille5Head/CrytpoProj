#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * @brief Function to convert string into full uppercase
 * 
 * @param Takes string input *text
 */
//Makes input into uppercase
void to_uppercase(char *text)
{
    for (int i = 0; text[i] != '\0'; i++) //iterating over string, until it raches the end of string '\0'
        {
        text[i] = toupper((unsigned char)text[i]); //each char is made into upper case
        }
}