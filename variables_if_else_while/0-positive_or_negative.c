#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX i/ 2;
    if (n > 0)
    {
    printf ("is positive");
    }
    if (n < 0)
    {
    printf ("is negative");
    }
    if (n == 0)
    {
    printf ("is zero");
    }
    return (0);
}
