//To find sum of the digits
#include<stdio.h>
int revadder(int);

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	printf("The sum of the digits of the Number is : %d", revadder(num));

}

int revadder(int x){
	if(x<=0){
		return 0;
	}
	int a = x%10;
	int b = x/10;
	
 return a+revadder(b);
}