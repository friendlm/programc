#include <stdio.h>

void myfilecopy(FILE *ifp, FILE *ofp);

main(int argc, char *argv[])
{
    FILE *fp;

    if(argc == 1) /* there is no argument */
	myfilecopy(stdin, stdout);
    else
	if(--argc > 0)
	    if((fp = fopen(*++argv, "r")) == NULL)
	    {
		printf("cannot open file %s\n", *argv);
		return 1;
	    }
	    else
	    {
		myfilecopy(fp, stdout);
		fclose(fp);
	    }
    return 0;
}



void myfilecopy(FILE *ifp, FILE *ofp)
{
    int c;

    while((c = getc(ifp)) != EOF) /* the end of file is EOF */
	putc(c, ofp);
 }




