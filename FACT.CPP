#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a, b, sum = 1;
 printf("Enter up to where to get the sum: ");
 scanf("%d", &a);

 for(b = 1; b<=a; b++){
   sum *= b;
 }
 printf("The Sum is : %d", sum);

 getch();

}