#include <stdio.h>

/*********************Start  Conditional Include ****************/
#define FIRST 0
#define SECOND 1
#define SYSFUNC SECOND     /*by change this line to control HDR Selection*/

#if SYSFUNC == FIRST
#define HDR "string_compare_001.c"
#elif SYSFUNC == SECOND
#define HDR "string_compare_002.c"
#else 
printf("HDR does not define");
#endif

#include HDR
/********************End Conditional Include********************/ 

main(int argc, char *argv[])
{
    int n1, n2, n3;    

    char equal01[5] = "abc";
    char equal02[5] = "abc";

    char big01[5]   = "cab";
    char big02[5]   = "abc";

    char less01[5]  = "abc";
    char less02[5]  = "cab";
    /* cannot assignment like the following, because equal01 is an address */
    /*
     *	    equal01 = "abc";
     *	    equal02 = "abc";
    */
    n1 = mystrcmp(equal01, equal02);
    n2 = mystrcmp(big01, big02);
    n3 = mystrcmp(less01, less02);

    printf("the test result is %d, %d, %d\n", n1, n2, n3);
}

