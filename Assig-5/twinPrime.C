//To print prime number less than 50
#include<stdio.h>
int prime_giver();


int main(){
 printf("The Prime numbers with 500 are : \n");
 
 prime_giver();

 return 0;
}

int prime_giver(){
	int a, b, counter=0, c[200], d=0;
	
	for(a=2;a<=500;a++){
		for(b=1;b<=a;b++){
			if(a%b == 0){
				counter++;
			}
		}
		
		if(counter == 2){
			//printf("\n %d", a);
			c[d] = a;
			
			d++;	
		}
		counter = 0;
	}
	int x,y;
	for(x=0; x<200; x++){
		if(c[x+1]-c[x]==2){
			printf("%d and %d \n", c[x+1], c[x]);
		}
		
	}
	
 return 0;
}

