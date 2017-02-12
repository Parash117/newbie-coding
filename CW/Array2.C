#include<stdio.h>
int main(){
	int num[10];
	int sum = 0,i,j;
	
	
	printf("Enter any 5 numbers : \n");
	
	for(i = 0; i <10; ++i)
	{
	scanf("%d \n", &num[i]);
	
	}
	
	for(j = 0; j<10; ++j)
	{
	sum = sum+num[j];
	printf("%d", num[j]);
	}
	printf("The sum is : %d", sum);
return 0;
}