#include <stdio.h>

int main(int argc, char **argv)
{
    int nc;
    int c;

    nc = 0;
    while((c=getchar()) != EOF)
    {
	if(c == '\n')
	    nc++;
    }

    printf("number of new line is %d\n", nc);
    return 1;
}

