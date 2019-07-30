#include <stdio.h>

int external_var;
static int static_ext_var;


main()
{
    printf("Default of external and static variable - %5d, %5d\n", external_var, static_ext_var);
}

