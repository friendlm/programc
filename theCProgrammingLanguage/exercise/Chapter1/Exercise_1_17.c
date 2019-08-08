#include <stdio.h>

#define MAXLINE 255
#define PRINTLEN 80

/* the following function is used to get next line and store the 
 * line into char array s[], then return the length of the line 
 */
int getnextline(char s[], int lim);

main()
{
    int linelen;
    char lines[MAXLINE];

    linelen = 0;
    while( linelen = getnextline(lines, MAXLINE))
    {
	if(linelen <= PRINTLEN)
	{
	    printf("the line content is - %s", lines);
	}
    }
}


int getnextline(char s[], int lim)
{
    int i, c;

    for(i = 0; i < lim && (c=getchar()) != EOF && c != '\n'; ++i)
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

