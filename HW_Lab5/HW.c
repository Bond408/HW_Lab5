#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void) {

	int x = 4000;
	double y = -0.875f;
	double z = -0.000475f;
	double mod = fabs(cos(x) - cos(y));
	double rank = 1 + 2 * pow(sin(y), 2);
	double mnozh_1 = pow(mod, rank);
	double mnozh_2 = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
	double w = mnozh_1 * mnozh_2;
	printf("%.5lg", w);






}