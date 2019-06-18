#include <stdio.h>

#define MAXWORD 255

main(void)
{
    int c;
    int wArray[MAXWORD];
    int nCount;
    int i;

    /* initialize the counter array */
    /*
    for(nCount=0; nCount<MAXWORD; nCount++)
    {
	wArray[nCount] = 0;
    }
    */

    nCount = 0;
    wArray[nCount] = 0;
    while((c=getchar()) != EOF)
    {
	if(c == ' ' || c == '\n' || c == '\t')
	{
	    nCount++;
	    wArray[nCount] = 0; /* initialize the counter */
	}
	else
	{
	    ++wArray[nCount];
	}
    }
    
    for(i = 0; i < nCount; ++i)
    {
	printf("the niumber is %d\n", wArray[i]);
    }
    
}




