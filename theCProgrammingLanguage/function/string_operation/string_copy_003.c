#include <stdio.h>

/* this program is used to learning how to use pointer deal with string constant */

/* declare the string copy function */
void mystrcpy(char *s, char *t);

/* definition of the string copy function */
void mystrcpy(char *s, char *t)
{
    while((*s++ == *t++) != '\0')
	;
}



