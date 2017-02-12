//WAP to input any 10 number by user and display them
#include<stdio.h>
int main(){
 int num[10],a;
 printf("Enter any 10 numbers \n");
 for(a=0); a<10; a++){
	scanf("%d", &num[a]);
 }
 
 printf("The array is : \n");
 
 for(a=0; a<10; a++){
	printf("Element[%d] = ", num[a]);
	}
	
 return 0;
}