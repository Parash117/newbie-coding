//To reverse the arrangment of array
#include<stdio.h>
int main(){

 int n, a, b;
 int c = 0;
 
 printf("How many number you want to store ? : \n");
 scanf("%d", &n);
 int ary[n];
 int aryi[n];
 
 printf("Enter the numbers : \n");
 
 for(a=0; a<n; a++){
	scanf("\n %d", &ary[a]);
	
 }
 
 printf("Original Array : \n");
 for(a=0; a<n; a++){
	printf("Element[%d] = %d \n", a, ary[a]);
 }
 
 /*for(a=n-1; a>=0; a--){
	printf("Element[%d] = %d \n", a, ary[a]);
 }
 */
 for(b=n-1; b>=0; b--){
	aryi[c] = ary[b];
	c++;
 }
 
 printf("Reversed Array : \n");
 for(a=0; a<n; a++){
	printf("Element[%d] = %d  \n", a, aryi[a]);
 }
return 0;
}
