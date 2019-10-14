#include <stdio.h>

main()
{
    int c;
    int flag = 0;
    int nc = 0;

    while((c=getchar()) != EOF)
    {
	if(c == ' ')
	{ 
	    flag = 1;
	    nc++;
	}
	else
	{
	    putchar(c);
	    flag = 0;
	}
	
	if (flag == 0 && nc > 0)
	    printf(" ");
    }
}

