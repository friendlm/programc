#include <stdio.h>

int mystrend(char *s, char *t);

int mystrend(char *s, char *t)
{
    char *sp;
    
    while(*s++ != '\0')
    {
	sp = s;
	while(*sp++ == *t++)
	    if(*t == '\0')
		return 1;
    }
    return 0;
}

int main(void)
{
    char *s = "abcdef";
    char *t = "def";
    printf("%d\n",mystrend(s, t));
    return 0;
}
