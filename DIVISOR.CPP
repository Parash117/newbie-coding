#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a, b;
 printf("Enter a number whose divisor you want: \n");
 scanf("%d", &a);
 printf("The Divisors of %d are: \n", a);

 for(b = 1; b<=a; b++){
	if(a%b == 0){
	 printf("%d \n", b);
	}
 }
 getch();
}