/*              reverseString                        */
/* A C program which demonstrates string reversering */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *obrniString(char *);

int main(void)
{
    char string[500];
    int strLen = 0;

    printf("Unesite neki string: ");
    scanf("%[^\n]", string);

    strLen = strlen(string);

    char reAllocatedString[strLen];

    strcpy(reAllocatedString, string);


    printf("%s", reAllocatedString);

    printf("\n\nIzvorna velicina stringa: %d", sizeof(string));
    printf("\n\nVelicina re-alociranog stringa: %d\n", sizeof(reAllocatedString));

    return 0;
}

char *obrniString (char *str)
{
    int i;
    int len = 0;
    char c;

    if (!str)
        return NULL;
    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < (len/2); i++)
    {
        c = str[i];
        str [i] = str[len - i - 1];
        str[len - i - 1] = c;
    }

    return str;

}
