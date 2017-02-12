#include<stdio.h>
#include<conio.h>
int main(){
 //clrscr();

 int a, b, sum;

 printf("Enter any two numbers to get their SUM: ");
 scanf("%d", &a);
 scanf("%d", &b);

 //calculation
 sum = a + b;

 printf("The sum is %d ", sum);

 getch();

 return 0;
		}