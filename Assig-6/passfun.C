//Write a function that is passed with an array of n pointers which returns the maximum.
#include<stdio.h>
int max(int *a);
int main(){
	int i,array[5];
	
	printf("Enter any 5 numbers : \n");
	for(i=0; i<5; i++){
		scanf("%d", &array[i]);
	}
	/*for(i=0;i<5;i++){
		max(p+i);
	}*/
	printf("The maximum no is : %d", max(array));
	return 0;
}

int max(int *a){
	int counter=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(*(a+i)>=*(a+j)){
				counter++;
			}
	//printf("%d", counter);
		}
		if(counter==5){
			return *(a+i);
			//printf("\n%d is the greatest of them all", *(a+i));
			break;
		}
		counter=0;
	}
	//printf("This function was called");
	return 0;
}