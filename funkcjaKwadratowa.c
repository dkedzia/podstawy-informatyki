/* 
Kalkulator rownania kwadratowego
Autor: Dominik Kedzia
WSZiB w Krakowie
*/

#include<stdio.h>
#include<math.h>

int main(){
	printf("Kalkulator rownania kwadratowego.\nWprowadz kolejno a, b i c:\n");
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double delta = (b*b)-(4*a*c);
	printf("Delta = %lf\n", delta);
	if(delta<0){
		printf("Brak rozwiazan\n");
	} else if (delta == 0){
			double x = ((-1)*b)/(2*a);
			printf("x = %lf", x);
		} else {
			double x1, x2, pdelta;
			pdelta = sqrt(delta);
			printf("Pierwiastek z delty = %lf\n", pdelta);
			x1 = (((-1)*b)-pdelta)/(2*a);
			x2 = (((-1)*b)+pdelta)/(2*a);
			printf("x1 = %lf,\nx2 = %lf\n", x1, x2);
	}

}
