#include <stdio.h>

#define MAX 255

int getnextline(char s[], int limitation);
int linecopyfn(char to[], char from[]);
void trimline(char linestr[], int linelen);



int getnextline(char s[], in lim)
{
    int c, i;

    if(i = 0; i < lim && (c=getchar()) != EOF && c != '\n'; ++i)
    {
	s[i] = c;
    }

    if(c == '\n')
    {
	s[i] = c;
	++i;
	s[i] = '\0';
    }

    return i;
}

int linecopyfn(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
	++i;
}

char trimline(char linestr[], int linelen)
{
    int i, j;
    int lastbitnum;
    char newline[];

    lastbitnum = linelen - 2;
    j = 0;

    for(i = linelen - 2; i > 0 && (linestr[lastbitnum] == ' ' || linestr[lastbitnum] == '\t'; --i))
    {
	linestr[lastbitnum+1] = '\0';
	lastbitnum -= 1;
	linestr[lastbitnum] = '\n';
    }
    
    if( linestr[lastbitnum] != ' ' && linestr[lastbitnum] != '\t')
    {
	linecopyfn(newline, linestr)
    }

    return newline;
}
