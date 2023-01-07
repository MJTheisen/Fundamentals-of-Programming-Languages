//Komisi Petelo and Michael Theisen

#include <stdio.h>

int multiply(int v[], int);

int main(void) {

   int arr[5], i = 1;


   for (int n = 0; n <= 4; n++)
	  arr[n] = i++;

   printf("the product of values is %d", multiply(arr, 5));
   return 0;

}

int multiply(int a[], int length) {

   int i, total = 1;
   for (i = 0; i < length; i++)
	  total = total * a[i];

   return total;
}
