#include <stdio.h>

#define WORD_OUT 0
#define WORD_IN  1
#define MAX_WORD 100

int main(int argc, char **argv)
{
    int c, i, j, k;
    int wc;
    int nwc[MAX_WORD];
    int wordstatus;

    wc = i = j = 0;
    for(k=0; k<=MAX_WORD; k++)
	nwc[k] = 0;

    while((c=getchar()) != EOF)
    {
	if(c == ' ' || c == '\t' || c == '\n')
	{
	    wordstatus = WORD_OUT;
	    i++;
	    if(wc > 0 && i < MAX_WORD)
		nwc[i] = wc;
	    wc = 0;
	}
	else 
	{
	    if(wordstatus == WORD_OUT)
	    {
		wordstatus = WORD_IN;
		wc++;
	    }
	    else
		wc++;
	}
    }
    for(j=0; j<MAX_WORD; j++)
    {
	if(nwc[j] > 0)
	    printf("word character number is equal to %3d\n", nwc[j]);
    }
}
