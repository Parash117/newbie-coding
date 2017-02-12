#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a,b, count = 0;

 for(a=2;a<=50;a++){
	for(b=1;b<=a;b++){
		if(a%b == 0){
		count++;
		}
	}

	if(count == 2){
		printf("%d \n", a);
		}
  count = 0;
 }
 getch();
}