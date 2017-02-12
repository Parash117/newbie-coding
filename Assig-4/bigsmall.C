#include<stdio.h>
int main(){
 int a,b,c,x,y;
 
 printf("How maany data you want to store in array 1 ? \n");
 scanf("%d", &a);
 int ary1[a];
 printf("Enter the numbers : \n");
 
 for(x=0; x<a; x++){
	scanf("%d", &ary1[x]);
 }
 
 printf("How maany data you want to store in array 2 ? \n");
 scanf("%d", &b);
 int ary2[b];
 printf("Enter the numbers : \n");
 for(y=0; y<b; y++){
	scanf("%d", &ary2[y]);
 }
 
 c = a+b;
 int ary3[c];
 for(x=0; x<a; x++){
	ary3[x] = ary1[x];
 }
 int z=0;
 while(z<b){
	ary3[x] = ary2[z];
	z++;
	x++;
 }
 
 int count;
 for(z=0; z<c; z++){
	for(y=0; y<c; y++){
		if(ary3[z]>ary3[y])
		{
			count++;
		}
	}
	if(count==c-1){
		printf("The greatest number is : %d \n", ary3[z]);
		break;
	}
	count=0;
 }
 
 count = 0;
 
 for(z=0; z<c; z++){
	for(y=0; y<c; y++){
		if(ary3[z]<ary3[y])
		{
			count++;
		}
	}
	if(count==c-1){
		printf("The lowest number is : %d \n", ary3[z]);
		break;
	}
	count=0;
 }
 
 for(z=0; z<c; z++){
	printf("Element[%d] = %d \n", z,ary3[z]);
 } 
 return 0;
}