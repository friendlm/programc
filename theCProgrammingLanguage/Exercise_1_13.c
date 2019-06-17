#include <stdio.h>

#define MAXWORD 255

main(void)
{
    int c;
    int wArray[MAXWORD];
    int nCount;

    /* initialize the counter array */
    /*
    for(nCount=0; nCount<MAXWORD; nCount++)
    {
	wArray[nCount] = 0;
    }
    */

    nCount = 0;
    wArray[nCount] = 0;
    while((c=getchar() != EOF))
    {
	if((c == ' ') || (c == '\n') || (c == '\t'))
	{
	    nCount++;
	    wArray[nCount] = 0; /* initialize the counter */
	}
	else
	{
	    ++wArray[nCount];
	}
    }

    int i;
    for(i=0; i<nCount;i++)
}




