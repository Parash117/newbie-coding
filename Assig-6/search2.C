//WAF that uses pointers to search for the address of a given integer in an givern array. If the given intefer is found, the function return its address, otherwirse it returns  NULL.
#include<stdio.h>

int* search(int *a, int s);

int main(){
	int array[10], s, i;
	printf("Enter the numbers in the array : \n");
	for(i=0;i<10;i++){
		scanf("%d", &array[i]);
	}
	printf("Address of which number do you want ? : ");
	scanf("%d", &s);
	printf("NUMBER\t\t\t\tADDRESS\n");
	printf("%d\t\t\t\t%p", *search(array, s), search(array, s));
	return 0;
}

int* search(int *a, int s){
	int i,counter=0;
	
	for(i=0; i<10; i++){
		if(s==*(a+i)){
			//printf("%d\t\t\t\t%u", *(a+i), (a+i));
			return (a+i);
		}
		if(s!=*(a+i)){
			counter++;
		}
	}
	if(counter==10){
		printf("NULL");
		return 0;
	}
	return 0;
}