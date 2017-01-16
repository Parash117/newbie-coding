#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a, b, c;
 printf("Enter ant three number: ");
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);

 if(a>b && a>c){
	printf("%d is the Greates among them", a);
 }
 else if(b>a && b>c){
	printf("%d is the Greates among them", b);
 }
 else{
	printf("%d is the Greates among them", c);
 }
 getch();

}