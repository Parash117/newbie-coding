//To print the fibonacci series
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
	int j,i,n;
	printf("Enter the n'th term you want to get : ");
	scanf("%d", &n);
	printf("The %d'th term of the series is : ", n);
	for (i = 0; i < n; i++) {
		j = fibonacci(i);
	}
	printf("%d", j);
	
   return 0;
}