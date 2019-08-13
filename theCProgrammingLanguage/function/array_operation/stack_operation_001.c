#include <stdio.h>

/*declare the following two functions*/
void mypush(double f);
double mypop(void);

#define MAXVAL   1000	/* define the max stack size */
int    sp  = 0;		/* define the stack pointer position */
double sval[MAXVAL]	/* decalare the stack and apply memory */

void mypush(double f)
{
    if(sp < MAXVAL)
	sval[sp++] = f;
    else
	printf("error: stack full, can't push %g \n",f);
}

double mypop(void)
{
    if(sp>0)
	return sval[--sp];
    else
    {
	printf("error: stack empty\n");
	return 0.0;
    }
}
