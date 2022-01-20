#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//È­¾¾ = ¼·¾¾ * 9/5 + 32
//¼·¾¾ = (È­¾¾ - 32) * 5/9
double c2f(double c1) {
	return (double)9 * c1 / 5 + 32;
}


double f2c(double f1) {
	return (double)(f1 - 32) * 5 / 9;
}


int main() {
	double f, c;

	printf("È­¾¾¿Í ¼·¾¾¸¦ ÀÔ·ÂÇÏ½Ã¿À:\n");
	scanf("%lf %lf", &f, &c);
	
	printf("%.1lf %.1lf", f2c(f), c2f(c));
}