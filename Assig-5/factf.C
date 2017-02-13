//To find the Factorial using Recrusive function
#include <stdio.h>

int factorial(unsigned int i) {
	
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main() {
   int n;
   printf("Enter a number to find it's factorial : ");
   scanf("%d", &n);
   printf("Factorial of %d is %d\n", n, factorial(n));
   return 0;
}