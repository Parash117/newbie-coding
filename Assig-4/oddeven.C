//WAP in C to input any 10 numbers in an array and count no. of ODD and EVEN and find out their sum and display them
#include<stdio.h>
int main(){
 int a, x, y, evencount=0, oddcount=0, evensum=0, oddsum=0;
 printf("How maany data you want to store in array ? \n");
 scanf("%d", &a);
 int ary1[a];
 printf("Enter the numbers : \n");
 
 for(x=0; x<a; x++){
	scanf("%d", &ary1[x]);
 }
 
 for(y=0; y<a; y++){
	if((ary1[y]%2)==0){
		evencount++;
		evensum+=ary1[y];
	}
	else{
		oddcount++;
		oddsum+=ary1[y];
	}
 }
 printf("The total no. of odd number is : %d \n", oddcount);
 printf("The sum of odd no. is : %d \n", oddsum);
 
 printf("The total no. of even number is : %d \n", evencount);
 printf("The sum of even no. is : %d \n", evensum);

 
 return 0;
 }