//Michael Theisen
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* repeated  (char*  original, int n);

int main(void) {

	printf("%s\n", repeated("bon", 2)); // 3 
	printf("%s\n", repeated("bon", 3));
	printf("%s\n", repeated("bon", 4));

	//free(original);
	//free(newString);
	//free(helper);
	//free(length);
	return 0;
}

char* repeated  (char*  original, int n) {
	int i, length = strlen(original); // length of string is 3 because b,o,n,.
        char*  newString = malloc (sizeof(char) * length * n + 1); //memory allocate (1*3*2+1) to newString
        
        //char*  newString = malloc (2 * length * n + 1); // this allocates a lot more memory.
        //the program hits an error if you try to run it with the "free(newString)" but still works if you dont use it
        // INVALID READ OF SIZE 1
        
	char*  helper = newString; //helper = (4 then 6 then 10) Thats 20

	for (i = 0; i < n; i++) { 
		strcpy( helper, original); // 0=b,1=o,2=n,3=\0,4,5,6.  
		helper = helper + length;  //helper points to 0 then 3 then 6  	
	}

	free (newString); // figured it out.
	//helper = NULL;
	//original = NULL;
	//length = NULL;
	
	return newString;
}


