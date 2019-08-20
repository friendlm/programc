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

int mybinarysearch(char *word, struct key tab[], int n)
{
    int cond;
    int low, high, mid;

    low = 0;
    hight = n - 1;

    while(low <= high)
    {
	mid = (low+high) / 2;
	if((cond = strcmp(word, tab[mid].word)) < 0 )
	    high = mid -1;
	else if (cond > 0)
	    low = mid + 1;
	else 
	    return mid;
    }
    return -1;
}
