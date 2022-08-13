#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *sptr, *dptr;
    char src[50],
    dest[100];

    sptr = src;
    dptr = dest;

    sptr = (char *)malloc(50 * sizeof(char));
    dptr = (char *)malloc(100 * sizeof(char));

    strcpy(sptr,"Balci");
    strcpy(dptr,"Yeliz ");

    strcat(dptr, sptr);

    printf("Ad Soyad: %s", dptr);
    return(0);

}
