#include <stdio.h>

/* declare the under-define function */
int mystrlen(char *s);


int mystrlen(char *s)
{
    char *p = s; /* here 's' is a constant - the address */

    while(*p != '\0')
	p++;

    return p - s; /* p is address, cannot return p */
}


