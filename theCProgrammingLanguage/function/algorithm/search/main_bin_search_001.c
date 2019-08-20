#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

int mygetword(char *, int);
int mybinarysearch(char *, struct key *, int);

main()
{
    int n;
    char word[MAXWORD];

    while(getword(word, MAXWORD) != EOF)
	if(isalpha(word[0]))
	    if((n=binarysearch(word,keytab, NKEYS)) >= 0)
		keytab[n].count++;

    for(n=0; n< NKEYS; n++)
	if(keytab[n].count > 0)
	    printf("%4d, %s", keytab[n].count, keytab[n].word);

    return 0;
}

