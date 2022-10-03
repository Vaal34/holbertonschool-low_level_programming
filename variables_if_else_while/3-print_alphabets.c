#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
char ch, CH;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (CH = 'A'; ch <= 'Z'; CH++)        
putchar(CH);
putchar('\n');
return (0);
}
