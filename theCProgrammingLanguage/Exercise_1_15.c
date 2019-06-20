#include <stdio.h>

#define FLOW 0            /* the lowest Fahrenheit value */
#define FHIGH 300         /* the highest Fahrenheit value */

/* declare the transfer function to transfer fahrenheit temperature to celsius temperature */
float fahrenheit_to_celsius(int fahrenheit);

main()
{
    float celsius;
    int i;

    for(i = 0; i <= 300; i+=20)
    {
	celsius = fahrenheit_to_celsius(i);
	printf("%3d %8.1f\n", i, celsius);
    }
}

/* here is the defination of declared function */
/* C = (5/9) * (F-32) */
float fahrenheit_to_celsius(int fahrenheit)
{
    float celsius;
    celsius = 5.0 / 9.0 * (fahrenheit - 32);
    
    return celsius;
}



