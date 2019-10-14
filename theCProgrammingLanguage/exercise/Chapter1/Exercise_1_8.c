#include <stdio.h>

/* write a program to count space, tabs, and new lines */

int main(int argc, char **argv)
{
    int scounter = 0;	//space counter - ' '
    int tcounter = 0;	//tabs  counter - '\t'
    int ncounter = 0;	//new line counter - '\n'
    int c;

    while((c=getchar()) != EOF)
    {
	if(c == ' ')
	    scounter++;
	if(c =='\t')
	    tcounter++;
	if(c == '\n')
	    ncounter++;
    }
    printf("the space, tab and new counter is equal to %3d %3d %3d\n", scounter, tcounter, ncounter);
}




