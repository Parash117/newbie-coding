//To input number and Decending using Function
#include<stdio.h>
int anum[10];
int c=0;
int display(int);

int main(){
 int a,n[10];
 printf("Input any 10 numbers : \n");
 for(a=0;a<10;a++){
	scanf("%d", &n[a]);
 }
 printf("\n");
 
 for(a=0;a<10;a++){
	display(n[a]);
	
 }
 
 return 0;
}

int display(int b){
	int x,y,temp;
	anum[c]=b;
	c++;
	if(c==9){
	
		/*for(x=0;x<10;x++){
			printf("%d", anum[x]);
		}*/
		for(x=0;x<10;x++){
			for(y=x+1;y<10;y++){
				if(anum[x]<anum[y]){
					temp = anum[x];
					anum[x] = anum[y];
					anum[y] = temp;
				}
			}
		}
		printf("The sorted list is : \n");
		for(x=0;x<10;x++){
			printf("%d ", anum[x]);
		}
	}
	
 return 0;
}