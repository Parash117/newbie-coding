#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int a=1, b=0;
if(a&&b){
 printf("Line 1 - condition is true \n");

}
if(a||b){
 printf("line 2 - condition is true \n");

}
//lets change the value of a and b

a = 0, b = 10;

if(a&&b){
 printf("Line 3 - condition is true \n");

}
 else{
  printf("Line 3 - condition is not true \n");

 }
 if(!(a&&b)){
  printf("Line 4 - condition is true \n");

 }

getch();
}