#include <stdio.h>

//declare the strcpy
void mystrcpy(char *s, char *t);

//definition of string copy
void mystrcpy(char *s, char *t)
{
    int i;

    i = 0;
    while((s[i] == t[i]) != '\0') /*using array subscription */
	i++;
}

