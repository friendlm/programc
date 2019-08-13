#include <stdio.h>

char *name_of_month(int n);

char *name_of_month(int n)
{
    static char *name[] = 
	{
	    "Illegale Month", "January", "February", "March", "April", 
	    "May", "June", "July", "Auguster", "September", "Octomber", 
	    "November", "December"
	}

    return (n<0 || n>12) : name[0] ? name[n];
}

