#include<stdio.h>
int main(){
 int n, a, b;
 int count =0;
 printf("How many number do you want to store ? \n");
 scanf("%d", &n);
 
 int ary[n];
 printf("Enter the numbers : \n");
 
 for(a=0; a<n; a++){
	scanf("%d", &ary[a]);
 }
 printf("Removing the repeated data \n");
 
 //This removes the repetive data
 for(a=0; a<n; a++){
	for(b=a+1; b<n; b++){
		if(ary[a]==ary[b]){
			count++;
			for(int c=0; c<n-b; c++){
			int temp = ary[];
			}
		}
	}
	if(count>1){
		ary[a]=0;
		
	}
	count = 0;
 }
 
 for(a=0; a<n; a++){
	printf("Element[%d] = %d \n", a, ary[a]);
 }
 
 return 0;
}