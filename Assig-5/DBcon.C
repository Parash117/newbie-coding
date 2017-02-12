//To convert Decimal number into Binary Number
#include<stdio.h>
int DBconverter(int);

int main(){
 long int decimal;
 printf("Enter a Decimal number : ");
 scanf("%ld", &decimal);
 printf("\n");
 
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
	printf("The binary conversion of %d is : ", dec);
	for( j = i-1; j>=0; j--){
		printf("%d",binary[j]);
	}
	
 return 0;
}