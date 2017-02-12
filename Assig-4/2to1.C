//WAP a program to read two arrays and merge these two arrays into third array
#include<stdio.h>
int main(){
 int a,b,c,x,y;
 
 printf("How maany data you want to store in array 1 ? \n");
 scanf("%d", &a);
 int ary1[a];
 printf("Enter the numbers : \n");
 
 for(x=0; x<a; x++){
	scanf("%d", &ary1[x]);
 }
 
 printf("How maany data you want to store in array 2 ? \n");
 scanf("%d", &b);
 int ary2[b];
 printf("Enter the numbers : \n");
 for(y=0; y<b; y++){
	scanf("%d", &ary2[y]);
 }
 
 c = a+b;
 int ary3[c];
 for(x=0; x<a; x++){
	ary3[x] = ary1[x];
 }
 int z=0;
 while(z<b){
	ary3[x] = ary2[z];
	z++;
	x++;
 }

 for(z=0; z<c; z++){
	printf("Element[%d] = %d \n", z,ary3[z]);
 } 
 return 0;
}