#include <stdio.h>  

#define IN   1  /* Inside a text */  
#define OUT  0  /* Outside a text */ 

int main(void)
{
    int c;
    int wStatus;

    while((c=getchar()) != EOF)
    {
	if((c == ' ') || (c == '\t') || (c == '\n'))
	{
	    putchar('\n');
	}
	else
	{
	    putchar(c);
	}
    }
}

/**************************************************************
int main(void)
{
    int c;
    int wStatus;

    while((c=getchar()) != EOF)
    {
	if((c == ' ') || (c == '\t') || (c == '\n'))
	{
	    wStatus = OUT;
	}
	else if(wStatus == OUT)
	{
	    wStatus = IN;
	}

	if(wStatus == IN)
	{
	    putchar(c);
	}
	else
	{
	    putchar('\n');
	}
    }
    return 0;
}
********************************************************************/
