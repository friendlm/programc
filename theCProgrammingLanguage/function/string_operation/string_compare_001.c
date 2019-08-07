#include <stdio.h>

/* this file is used to demonstrate array subscription usage */
int mystrcmp(char *s, char *t);

/* definition of the function */
int mystrcmp(char *s, char *t)
{
    int i;

    for(i = 0; s[i] == t[i]; i++)
	if(s[i] == '\0')
	    return 0;

    return s[i] - t[i];
}




