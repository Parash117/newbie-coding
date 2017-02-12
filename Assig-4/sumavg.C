#include<stdio.h>
int main(){
 int a, mark[10], sum=0;
 printf("Enter any 10 numbers : \n");
 
 for(a=0; a<10; a++){
	scanf("%d", &mark[a]);
	
 }
 
 for(a=0; a<10; a++){
	sum+=mark[a];
 }
 printf("\n The sum is : %d", sum);
 
 int avg = sum/10;
 printf("\n The average is : %d \n", avg);

 return 0;
}