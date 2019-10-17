#include <stdio.h>

int main(int argc, char **argv)
{
    int nc;

    nc = 0;
    while(getchar() != EOF)
	nc++;
    printf("Charater counting is equal to %2d\n", nc);
    return 1;
}
