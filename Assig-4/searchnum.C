//WAP in C to input any 10 numbers in an array and search an element.
#include<stdio.h>
int main(){
 int a,b,x;
 
 printf("How maany data you want to store in array ? \n");
 scanf("%d", &a);
 int ary[a];
 printf("Enter the numbers : \n");
 
 for(x=0; x<a; x++){
	scanf("%d", &ary[x]);
 }
 
 printf("What element do you want to search ? \n");
 scanf("%d", &b);
 
 for(int c=0; c<a; c++){
	int d=c+1;
	if(ary[c]==b){
		printf("It lies in Element[%d] i.e. %d row \n", c,d);
	}
 }
 
 return 0;
 }