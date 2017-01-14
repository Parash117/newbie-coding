#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a, b, counter = 0;
 printf("Enter a number to find if its prime or not: \n");
 scanf("%d", &a);


 for(b = 1; b<=a; b++){
	if(a%b == 0){
		counter++;
	}
 }
 if(a = 1){
  printf("1 is neither prime nor composite");
 }
 else if(counter == 2){
	printf("The Number is Prime");
 }
 else{
	printf("The Number is Not Prime");
 }

 getch();
}