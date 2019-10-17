#include <stdio.h>

int main(int argc, char **argv)
{
    int nc;

    for(nc=0; getchar() != EOF; nc++)
	;
    printf("Charater counting is equal to %2d\n", nc);
    return 1;
}
