#include<stdio.h>
int main(){
 int  marks[5][5],a,b,sum =0;
 //char stu[1];
 printf("For the Marks of 5 students");
 
 for(a=0; a<5; a++){
	printf("Enter the student %d 's marks \n" , a);
	
	for(b=0; b<5; b++){
		scanf("%d", &marks[a][b]);
	
	}
	
	
 }
 for(b=0; b<5; b++){
 
	for(a=0; a<5; a++){
		sum += marks[b][a];
	
		}

 printf("Marks of The %d student is : %d \n", b, sum);
 sum = 0; 
}

return 0;
}