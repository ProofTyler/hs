#include <stdio.h>
#include <math.h>
#include "xsin.h"
#include "tsin.h"

int main() {
	double x = 8;

		double sin_t = tsin(x);
		double cos_t = tcos(x);

		double sin_x = sinx(x);
		double cos_x = cosx(x);

		double sin_m = sin(x);
		double cos_m = cos(x);	
		
		printf("\n");
		printf("Taylorreihe:\n");
		printf("sin(%lf) = %.16f\n",x,sin_t);
		printf("cos(%lf) = %.16f\n",x,cos_t);
		printf("\n");
		
		printf("Plauger:\n");
		printf("sin(%lf) = %.16f\n",x,sin_x);
		printf("cos(%lf) = %.16f\n",x,cos_x);
		printf("\n");

		printf("math.h:\n");
		printf("sin(%lf) = %.16f\n",x,sin_m);
		printf("cos(%lf) = %.16f\n",x,cos_m);
		printf("--------------------------\n");


	
	return 0;
}