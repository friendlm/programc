#include <stdio.h>

/*********************************************************************************
 *                                                                               * 
 * This example intend to using for and while to practice range variables        *
 * For example                                                                   *
 *           var_low <= var <= var_high                                          *
 *           var_steps = steps                                                   *
 *                                                                               *
/*********************************************************************************/

void rangefunfor();
void rangefunwhile();

int main(int argc, char **argv[])
{
    printf("the following is the for loop practice for range variable\n");
    rangefunfor();

    printf("the following is the for while practice for range variable\n");
    rangefunwhile();
}



void rangefunfor()
{
    int celsius;
    int fahrenheit;

    for(fahrenheit = 1; fahrenheit <= 300; fahrenheit += 20)
    {
	celsius = 5 * (fahrenheit - 32) / 9;
	printf("%-3d\t%d\n", fahrenheit, celsius);
    }
}

void rangefunwhile()
{
    int high, low, steps;
    float temp;
     
    low = 1;
    high = 300;
    steps = 20;
    while( low <= high )
    {
	temp = 5.0 * (low - 32.0) / 9.0;
	printf("%3d\t%5.2f\n", low, temp);
	low += steps;
    }
}
