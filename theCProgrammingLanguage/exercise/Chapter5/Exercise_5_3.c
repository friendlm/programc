#include <stdio.h>

void mystrcat(char *s, char *t);


void mystrcat(char *s, char *t)
{
    while(*s++ != '\0')
	;    /* do nothing */
    
    *s--;    /* if *s == '\0' then, *s-- back to the last string */
    while((*s++ = *t++) != '\0')
	;    /* copy t content to s */

    *s = '\0'; 
}

