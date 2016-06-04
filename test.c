#include <stdio.h>
#include <math.h>
#include "tsin.h"
#include "xsin.h"

int main() {
	double x = 2.3;
	//while (x < 2) {
	printf("sin: %.16f\n", tsin(x));
	printf("cos: %.16f\n", tcos(x));
	printf("\n");
	printf("sin: %.16f\n", sinx(x));
	printf("cos: %.16f\n", cosx(x));
	printf("\n");
	//x = x + 0.2;
	//}
	/*
	double x = 0.0;
	while(x < 3) {
		double sin_t = tsin(x);
		double cos_t = tcos(x);

		double sin_m = sin(x);
		double cos_m = cos(x);	
		
		printf("\n");
		printf("Taylorreihe:\n");
		printf("sin(%lf) = %.16f\n",x,sin_t);
		printf("cos(%lf) = %.16f\n",x,cos_t);
		printf("\n");

		printf("math.h:\n");
		printf("sin(%lf) = %.16f\n",x,sin_m);
		printf("cos(%lf) = %.16f\n",x,cos_m);
		printf("--------------------------\n");
		x = x + 0.2;
	}

	*/
	return 0;
}