#include<stdio.h>
int main(){
 int a, value[10];
 
 value[0] = 0;
 value[1] = 1;
 value[2] = 2;
 value[3] = 3;
 value[4] = 4;
 value[5] = 5;
 value[6] = 6;
 value[7] = 7;
 value[8] = 8;
 value[9] = 9;
 
 for(a=0; a<10; a++){
	printf("Element[%d] = %d \n", a,value[a]);
 }
 
return 0;
}