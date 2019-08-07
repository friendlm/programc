#include <stdio.h>

/* this file is used to demonstrate pointer usage in string constant*/
int mystrcmp(char *s, char *t);

/* definition of the function */
int mystrcmp(char *s, char *t)
{
    for( ; *s == *t; s++, i++)
	if(*s == '\0')
	    return 0;
    
    return *s - *t;
}




