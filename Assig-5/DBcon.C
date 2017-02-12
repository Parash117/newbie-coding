//To convert Decimal number into Binary Number
#include<stdio.h>
int DBconverter(int);

int main(){
 int decimal;
 printf("Enter a Decimal number : ");
 scanf("%d", &decimal);
 
 DBconverter(decimal);
 
 return 0;
}

int DBconverter(int dec){
	int i=0, j, quotent;
	int binary[100];
	quotent = dec;
	while(quotent!=0){
		binary[i] = quotent%2;
		quotent = quotent/2;
		i++;
	}
	for( j = i; j!=0; j--){
		printf("%d",binary[i]);
	}
	
 return 0;
}