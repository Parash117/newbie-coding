//To read n no. of employes and give them age then count how many are above 80
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	
	int *age=NULL, i,j,n,count=0;
	printf("How many Employes do you want to have ? ");
	scanf("%d", &n);
	char nam, name[n][30],p;
	age=(int*)malloc(n*sizeof(int));
	//name=(char*)malloc(n*sizeof(char));
	
	printf("now fill up \n");
	
	for(i=0; i<n; i++){
		printf("Enter the name of the Employe : ");
		for(j=0; j<30; j++){
			nam = getch();
			
			if(nam==13){
				break;
			}
			
			name[i][j] = nam;
			putch(nam);
			
			//scanf("%s", &name[i][30]);
		}
		printf("\tEnter his/her Age : ");
		scanf("%d", (age+i));
	}
	printf("Name\t\tAge");
	printf("\n");
	for(i=0; i<n; i++){
		for(j=0; p!='\0'; j++){
			printf("%c", name[i][j]);
			p = name[i][j];
		}
		p='a';
		printf("\t\t%d", *(age+i));
		printf("\n");
	}
	
	
	for(i=0;i<n;i++){
		if(age[i]>=80){
			count++;
		}
	}
	printf("Among them %d are above 80 years old", count);	
	printf("\nName\t\tAge\n");
	for(i=0;i<n;i++){
		if(age[i]>=80){
			for(j=0;p!=0;j++){
				printf("%c", name[i][j]);
				p = name[i][j];
			}
			p='a';
			printf("\t\t%d", *(age+i));
			printf("\n");
			
		}
	}
	
 return 0;
}