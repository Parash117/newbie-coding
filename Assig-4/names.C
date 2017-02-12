//to initialize any 10 value in an array and display them
#include<stdio.h>
int main(){
 int a;
 char name[10][100];
 
 printf("Enter 10 names : \n");
 
 for(a=0; a<10; a++){
	scanf("%s", &name[a]);
 }
 printf("The entered Names are : \n");
 
 for(a=0; a<10; a++){
	printf("%s \n", name[a]);
 }
 
 return 0;
}