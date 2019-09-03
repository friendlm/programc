#include <stdio.h>
#include <stdlib.h>

void myfilecp(FILE *ifp, FILE *ofp);

main(int argc, char *argv[])
{
    FILE *fp;
    char *prog = argv[0]; /*program name for errors*/

    if(argc == 1)
	myfilecp(stdin, stdout);  /* copy stdin (keyboard) to stdout (screed) */
    else
	if(--argc > 0)
	    if((fp = fopen(*++argv, "r")) == NULL)
	    {
		fprintf(stderr, "%s: cannot open %s\n", prog, *argv);
		exit(1);
	    }
	    else
	    {
		myfilecp(fp, stdout);
		fclose(fp);
	    }

    if(ferror(stdout))
    {
	fprintf(stderr, "%s: error writing stdout\n", prog);
	exit(2);
    }
    exit(0);
}

void myfilecp(FILE *ifp, FILE *ofp)
{
    int c;

    while((c = getc(ifp)) != EOF)
	putc(c, ofp);
}

