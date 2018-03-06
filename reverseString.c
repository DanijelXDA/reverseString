/*              reverseString                        */
/* A C program which demonstrates string reversering */


#include <stdio.h>
#include <stdlib.h>

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
