//To print prime number less than 50
#include<stdio.h>
void prime_giver();

int main(){
 printf("The Prime numbers with 500 are : \n");
 printf("1 is neither \n");
 
 prime_giver();

 return 0;
}

void prime_giver(){
	int a, b, counter=0;
	
	for(a=2;a<=500;a++){
		for(b=1;b<=a;b++){
			if(a%b == 0){
				counter++;
			}
		}
		if(counter == 2){
			printf("\n %d", a);
		}
		counter = 0;
	}


}