#include <stdio.h>

#define MAXLINE 1000

int getlines(char linestr[], int limitation);
void copy(char to[], char from[]);

main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while( (len = getlines(line, MAXLINE)) > 0)
    {
	if(len > max)
	{
	    max = len;
	    copy(longest, line);
	}
    }
    if (max> 0) /* there was a line */
    {
	printf("\n%s", longest);
    }
    return 0;
}
int getlines(char linestr[], int limitation)
{
    int i, c;

    i = 0;
    while((c=getchar()) != EOF && i < limitation - 1)
    {
	if(c == '\n')
	{
	    linestr[i] = c;
	    ++i;
	    linestr[i] = '\0';
	    return i;
	}
	else
	{
	    ++i;
	    linestr[i] = c;
	}
    }
}


/*
int getlines(char linestr[], int limitation)
{
    int i;
    int c;
    
    for(i=0; i < limitation - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
    {
	linestr[i] = c;
    }
    if (c == '\n')
    {
	linestr[i] = c;
	++i;
    }
    linestr[i] = '\0';
    return i;
 }
*/

void copy(char to[], char from[])
{
    int i;
    
    for(i=0; (to[i] = from[i]) != '\0'; i++)
	;
}
/*
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
	++i;
}
*/


