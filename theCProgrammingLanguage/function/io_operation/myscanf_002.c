#include <stdio.h>

main()
{
    int day, year;
    char monthname[2];
    
    scanf("%d%s%d", &day, monthname, &year);
    printf("the date is %d %s %d\n", day, monthname, year);
    return 0;   
}
