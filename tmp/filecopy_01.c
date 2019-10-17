#include <stdio.h>

main()
{
    int c;

    for(; (c=getchar()) != EOF ; )
    {
	putchar(c);
    }
    
     printf("The value of EOF is %d\n", EOF);
}

