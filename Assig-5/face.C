//To input number and Accending using Function
#include<stdio.h>
int display(int);

int main(){
 int a,n[10];
 printf("Input any 10 numbers : \n");
 for(a=0;a<10;a++){
	scanf("%d", &n[a]);
 }
 printf("\n");
 
 printf("Now, this is printed using function : \n");
 for(a=0;a<10;a++){
	display(n[a]);
	
 }
 
 return 0;
}

int display(int x){
	printf("%d ", x);

 return 0;
}