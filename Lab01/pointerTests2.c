//Komisi Petelo and Michael Theisen


#include<stdio.h>
int main (void)  {
    int *myptr, *t, k;
    myptr = t = NULL; 
    myptr = &k;
    *myptr = 13;
    //*t = *myptr; // fails here
    k = 3;
    //*t = k;      // fails here 
    myptr = 456;
       return 0;
}