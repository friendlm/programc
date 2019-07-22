#include <stdio.h>

#define MAXLINE 1000	/* the max line characters */

int fnGetline(char line[], int limit);
void fnSwap(char source[], char target[]);
int fnStrindex(char line[], char pattern[]);

int main()
{
    
}

int fnGetline(char line[], int limit)
{
    int c, i;
    i = 0;
    while(--limit > 0 && (c=getchar()) != EOF && c != '\n')
	line[i++] = c;
    if(c == '\n')
	line[i++] = c;
    line[i] = '\0';
}

inf fnStrindex(char line[], char pattern[])
{
    int i, j, k;

    i = j = k = 0;
    for(i = 0; line[i] != '\0'; i++)
    {
	for( j=i,k=0;  pattern[k] != '\0' && line[j]==pattern[k]; j++, k++)
	    ;
	if(k > 0 && t[k] == '\0')
	{
	    return i;
	}
    }
    return -1;
}





