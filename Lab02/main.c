Michael Theisen

// #1 The file did not want to open. Reason: "Command gcc not found, 
//    but can be installed with: sudo apt install gcc". That worked! 
//    Run successful. Entered "3". Result: "Function: The square of 
//    3 is 9". Nice, the code works.

// #2 It seems that the code became more "Java Like". It removed the
//    second if statement and seems to have simplified the code. The
//    square.c was unchanged though.

// #3 It looks like the lines that I typed in for some of the input
//    variables were simplified during the variable declaration and
//    also within the printf statement itself. It also just ignores
//    the first if statement since it is technically never called 
//    and the scanf does not request a value since MY_X is constant.
//    The -E tagged terminal shows that the constants are populated
//    with what is the actual equation because that's what's actually
//    happening in the code.

// #4 The new output shows exactly what the macros are doing and 
//    skips over the first printf chunk of code since PRINT is 2.
//    It also prints the new N*2 macro since it does not have any 
//    requirements for an if statement.  

// #5 There is a new main.s file! It looks confusing. Hey! That's 
//    Assembly language! It also has way more commands than we used 
//    in TCSS 371.

// #6 It contains a main.o file. "Could Not Display "main.o" After 
//    many failed attempts to open main.o, I found a hex editor called
//    "bless" and was able to install in on the ubuntu machine. It 
//    looks like the main.o file is all in Hexadecimal code. 

// #7 I don't know if this is correct because I never managed to ask 
//    the question and Discord response did not help. 
//    gcc main.c
//    renamed a.out executable to myex.out
//    gcc -o myprog main.c
//    ./myprog


#include "square.c"

#define MY_X 10
#define MY_SQUARE(x) ((x) * (x))
#define MY_DOUBLE(N) ((N) * (2))  
#define PRINT  2 // changed from 1 to enact the second if statement 
#define my_bytes int // changed from four_bytes

int main() {

   // this program shows the usage of pre-processor directives 
  
   my_bytes	x, s1, s2; // changed from four_bytes

   #if PRINT == 1
       printf("Enter any integer: ");
       scanf("%d",&x);
       s1 = Square(x);
       printf("Function: The square of %d is %d\n", x, s1);
   #endif
   #if PRINT == 2
      s1 = MY_X;
      s2 = MY_SQUARE(s1);
      printf("Macro: The square of %d is %d\n", MY_X, s2);
   #endif
   // new macro, MY_DOUBLE
   s1 = MY_X;
   s2 = MY_DOUBLE(s1);
   printf("Macro: The output of (N * 2) for N = %d is: %d\n", MY_X, s2); 
}
















