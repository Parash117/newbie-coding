//To revers a number using Recursive Function
#include<stdio.h>
int rev(int);
int revs=0;
int main(){
	int n;
	printf("Enter any number : ");
	scanf("%d", &n);
	
	printf("%d", rev(n));
	
 return 0;
 
}

int rev(int a){
	
	if(a == 0){
		return revs;
	}
	revs = revs*10;
	revs = revs+a%10;
	a = a/10;
	
	
 return rev(a);
}