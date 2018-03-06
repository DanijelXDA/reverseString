/*              reverseString                        */
/* A C program which demonstrates string reversering */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *obrniString(char *, int);

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
    
    printf("\nObrnuti string je: \n");
    printf("%s\n", obrniString(reAllocatedString, strLen));

    
    return 0;
}

char *obrniString (char *str, int strLen)
{
    int i;
    char c;

    if (!str)
        return NULL;

    for(i = 0; i < (strLen/2); i++)
    {
        c = str[i];
        str [i] = str[strLen - i - 1];
        str[strLen - i - 1] = c;
    }

    return str;

}
