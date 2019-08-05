#include <stdio.h>


/* declare the function I will write */
int mystrlen(char *s);

/* here is the definition of the function */
int mystrlen(char *s)
{
    int i;

    for(i=0; *s != '\0'; s++)
	i++;

    return i;
}

main()
{
    int n;

    n =  mystrlen("this is a test");

    printf("the length is %5d\n", n);
}
