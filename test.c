#include <stdio.h>
#include <math.h>
#include "tsin.h"

int main() {
	double x = -6;
	while (x < 6) {
		printf("tsin(%f):     %.16f\n", x ,tsin(x));
		printf("tcos(%f):     %.16f\n", x, tcos(x));
		printf("\n");
		printf("math sin(%f): %.16f\n", x, sin(x));
		printf("math cos(%f): %.16f\n", x, cos(x));
		printf("--------------------------\n");
		x = x + 0.5;
	}
	return 0;
}