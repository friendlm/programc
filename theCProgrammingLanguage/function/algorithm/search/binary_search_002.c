#include <stdio.h>

struct key 
{
    char *word;
    int count;
} keytab[] = 
{
    "auto", 0,
    "break", 0,
    "case", 0,
    "char", 0,
    "const ", 0,
    "continue", 0,
    "default", 0,
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
};

struct key *mybinarysearch(char *word, struct key *tab, int n)
{
    int cond;
    struct key *low;
    struct key *high;
    struct key *mid;

    low = &tab[0];
    high = &tab[n];

    while (low < high)
    {
	mid = low + (high -low) / 2;
	if(cond = (strcmp(word, mid->word)) < 0)
	    high = mid;
	else if (cond > 0)
	    low = mid+1;
	return mid;
    }
    return NULL;
}

