//To convert binary to decimal
#include<stdio.h>

int BDconverter(int);
int DBconverter(int);
int add(int, int);
int sub(int, int);
int no_of_bit(int);
int binary_checker(int, int);

int main(){
	int sel, binary, binary2;
	RENTER:
	printf("Enter any two binary numbers : ");
	scanf("%d", &binary);
	scanf("%d", &binary2);
	int no_bit = no_of_bit(binary);
	int no_bit2 = no_of_bit(binary2);
	
	int H = binary_checker(binary, no_bit);
	int G = binary_checker(binary2, no_bit2);
	if(G==1||H==1){
		goto RENTER;
	}
	int num = binary;
	int num2 = binary2;
	int dec_value = BDconverter(num);
	int dec_value2 = BDconverter(num2);
	printf("What do you want to do ?\n1. Add The binary\n2.Subtract the Binary\n");
	scanf("%d", &sel);
	START:
	switch(sel){
		case 1:
			printf("The added result is :");
			add(dec_value,dec_value2);
		break;
		
		case 2:
			printf("The subrtaced result is : ");
			sub(dec_value,dec_value2);
		break;
			
		default:
			printf("Please enter a valid option");
			goto START;
		break;
	
	}
	
	//printf("The decimal no is : %d", dec);

	return 0;
}

int BDconverter(int num){
	int rem, base=1,decimal=0;
	while (num > 0)
    {
        rem = num % 10;
        decimal = decimal+rem*base;
        num = num/10 ;
        base = base*2;
    }



	return decimal;
 }
 
 int sub(int a, int b){
	int result;
	result = a-b;
	
	return DBconverter(result);
 }
 
 int add(int a, int b){
	int result;
	result = a+b;
	
	return DBconverter(result);
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
	
	for( j = i-1; j>=0; j--){
		printf("%d",binary[j]);
	}
	
 return 0;
}

int no_of_bit(int num){
	int j,count=0;
	for(j=0; num>0; j++){
		num = num/10;
		count++;
	}
	return count;
}

int binary_checker(int a, int b){
	int j,bin[b];
	for(j=0; j < b; j++){
		bin[j] = a%10;
		a = a/10;
	}
	for(j=0; j<b; j++){
		if(bin[j]>1){
			printf("Enter a valid binary number...!! \n");
			return 1;
		}
	}
	return 0;
}