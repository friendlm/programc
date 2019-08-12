#include <stdio.h>

/* declare the function mygetline */
int mygetline(char *s, int maxsize);

/* definition the function mygetline */
int mygetline(char *s, int maxsize)
{
    int i c;
    
    for(i=0; i <= maxsize -1 && (c=getchar()) != EOF && c != '\n'; i++)
	s[i] = c;

    if(c == '\n')
    {
	s[i] = c;
	++i;
    }

    s[i] = '\0';
    return i;
}


