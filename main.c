/* test comment */
#include <stdio.h>
#include <stdarg.h>

void sub(double arg, ...)
{
	va_list ap;
	int turn;

	va_start(ap, arg);

	turn = va_arg(ap, int);
	printf("%d\n", turn);

	va_end(ap);
}


int main()
{
	double f;

	// sub(f, 0);
	sub(f);
	return 0;
}
