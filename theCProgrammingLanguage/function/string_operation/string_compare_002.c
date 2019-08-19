#include <stdio.h>

/* this file is used to demonstrate pointer usage in string constant*/
int mystrcmp(char *s, char *t);

/* definition of the function */
int mystrcmp(char *s, char *t)
{
    printf("this is the second string compare file\n");
    for( ; *s == *t; s++, t++)
	if(*s == '\0')
	    return 0;
    
    return *s - *t;
}




