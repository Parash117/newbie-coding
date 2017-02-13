//Write a recursive function to generate the particular term in Fibonacci Series. ( eg. 8th term: 13).
#include <stdio.h>

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

   int i, fs[20],a;
	
   for (i = 0; i < 20; i++) {
      fs[i] = fibonacci(i);
   }
	
	printf("Which term do you want to select ? \n");
	scanf("%d", &a);
	
	printf("The %d term is : %d", a, fs[a-1]);
	
   return 0;
}