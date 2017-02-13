 //To check wether the number is palindorn or not
 #include<stdio.h>
 
 int palind();

 int main(void)
 {
	palind();
 }
 
 
 
 int palind()
 {
 int num,rev=0,temp;
 printf("Enter a number to be checked:");
 scanf("%d",&num);
 temp=num;
 
 while(temp!=0)
 {
	rev=rev*10;
	rev=rev+temp%10;
	temp=temp/10;
 }
	if(num==rev)
	{
		printf(" %d is palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome number",num);
	}
 }