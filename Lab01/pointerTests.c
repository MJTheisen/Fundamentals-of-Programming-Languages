//Komisi Petelo and Michael Theisen

#include<stdio.h>

void sortnum(double*, double*);

int main(void) {
	double num1 = 53.0, num2 = 30.0;

	sortnum(&num1, &num2);

	printf("smaller value %.2f\n", num2);
	printf("larger value %.2f\n", num1);

	return 0;

}


void sortnum(double *pt1, double *pt2) {

	double *aux;
	if (*pt1 > *pt2) {
		aux = pt1;
		pt1 = pt2;
		pt2 = aux;
	}
}



