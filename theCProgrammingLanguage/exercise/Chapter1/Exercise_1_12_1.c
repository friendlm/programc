#include <stdio.h>

int main(int argc, char **argv)
{
    int nspace;
    int nother;
    int c;
    int i;
    int ndigary[10];

    nspace = nother = 0;
    for(i=0;i<10;i++)
	ndigary[i] = 0;

    while((c=getchar()) != EOF)
    {
	if(c > '0' && c < '9')
	    ++ndigary[c-'0'];
	else if(c == ' ' || c == '\t' || c == '\n')
	    ++nspace;
	else
	    ++nother;
    }
}




