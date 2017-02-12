#include<stdio.h>
int main(){

 int num[10], a;
 printf("Please enter any 10 numbers \n");
 
 
 for(a=0; a<10; a++){
	scanf("%d", &num[a]);
 }
 
 printf("The Numbers are : \n");
 
 for(a=0; a<10; a++){
	printf(" %d \n", num[a]);
 }
 
return 0;
}