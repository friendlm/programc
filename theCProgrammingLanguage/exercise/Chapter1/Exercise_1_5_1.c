#include <stdio.h>

#define STATIN	0
#define STATOUT 1

int main(int argc, char **argv)
{
    /* this function is used to count word and new line */
    int wc;
    int nc;
    int c;
    int status;

    /* initialize the new line counter and word counter */
    wc = nc = 0; 
    status = STATOUT;
    while((c=getchar()) != EOF)
    {
	if(c ==  '\n')
	    ++nc;
	if(c != ' ' && c != '\n' && c != '\t')
	{
	    status = STATIN;    /* word start */
	}
	else if(status == STATIN) /* two condition */
	{
	    ++wc;
	    status = STATOUT;
	}
    }
    printf("the new and word is %d, %d\n", nc, wc);
}


