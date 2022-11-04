#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int resultat;
	va_list add; /* declaration of add*/

	if (n == 0)
		return (0);

	va_start(add, n); /*initialisation add*/

	for (i = 0; i < n; i++)
	{
		resultat = resultat + va_arg(add, unsigned int); /*donne le prmtr courant*/
	}
	va_end(add); /*stop la liste add*/
	return (resultat);
}
