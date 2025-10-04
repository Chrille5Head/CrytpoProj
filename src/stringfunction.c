#include <ctype.h>
#include <stdio.h>
#include <string.h>

//Makes input into uppercase
void to_uppercase(char *text)
{
    for (int i = 0; text[i] != '\0'; i++)
        {
        text[i] = toupper((unsigned char)text[i]);
        }
}