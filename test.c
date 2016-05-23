#include <stdio.h>
#include "xsin.h"
#include "tsin.h"

int main() {
	double x = 2.3;

	long double sin_t = tsin(x, 10);
	long double cos_t = tcos(x, 10);

	long double sin_x = sinx(x);
	long double cos_x = cosx(x);

	long double sin_m = sin(x);
	long double cos_m = cos(x);	

	printf("\n");
	printf("Taylorreihe:\n");
	printf("sin(%lf) = %.30Lf\n",x,sin_t);
	printf("cos(%lf) = %.30Lf\n",x,cos_t);
	printf("\n");

	printf("Plauger:\n");
	printf("sin(%lf) = %.30Lf\n",x,sin_x);
	printf("cos(%lf) = %.30Lf\n",x,cos_x);
	printf("\n");

	printf("math.h:\n");
	printf("sin(%lf) = %.30Lf\n",x,sin_m);
	printf("cos(%lf) = %.30Lf\n",x,cos_m);
	printf("\n");
	return 0;
}