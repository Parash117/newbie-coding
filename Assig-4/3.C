#include<stdio.h>
int main(){
 
 int n, a=0, b=0;
 
 
 printf("How many Number you want to store ? ");
 scanf("%d", &n);
 int ary1[n], ary2[n], ary3[2][n];
 printf("Enter the first %d numbers : \n", n);
 
 for(a=0; a<n; a++){
	scanf("%d", &ary1[a]);
 
 }
 
 printf("Enter the second %d numbers : \n");
 
 for(a=0; a<n; a++){
	scanf("%d", &ary2[a]);
 
 }
 
 for(a=0; a<2; a++){
		while(b<n){
		ary3[a][b] = ary1[b];

		
		b++;
		}
		
 }
 a=0;
 for(b=0; b<2; b++){
		while(a<n){
		ary3[a][b] = ary2[a];
		a++;
		}
		
 }
 b=0;
 a=0;
 printf("The numbers are :");
 
 
 for(a=0; a<n; a++){
	
	printf("%d element of both array : %d, %d", a, ary3[a][b], ary[c][d]);
	
 }
 
 printf("The Mixed array is : \n");
 
 for(a=0; a<n; a++){
	b=0;
	printf("Element[%d,%d] = cd %d \n", a,b, ary3[a][b]);
	
 }
 
return 0;
}