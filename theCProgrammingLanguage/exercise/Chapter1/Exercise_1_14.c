#include <stdio.h>

#define TOTALCHARACTERS  128  /* Total character numbers on the keyboard is 128 */

main()
{
    int c;
    int characterarray[TOTALCHARACTERS];
    int i,j;
    
    for(i = 0; i < TOTALCHARACTERS; ++i)
   	characterarray[i] = 0;
   
    while((c=getchar()) != EOF)
   	++characterarray[c];
   
    for(i = 0;i < TOTALCHARACTERS;++i)
    {
        putchar(i);
        
        for(j=0;j<characterarray[i];++j)
            putchar('*');
        
        putchar('\n');
    }
}

