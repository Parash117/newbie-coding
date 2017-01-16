#include<stdio.h>
#include<conio.h>
#define pi 3.1415
// a. calculate area and circumferance of a circle
// b. Calculate sum of 6 subject and find percentage
// c. Check whehter a number is even or odd

void main(){
clrscr();
  float r, area, circ;

  printf("Enter The radius of circle To get the area and circumference: ");
  scanf("%f", &r);

  //Calculation:

  area = pi*r;
  circ = 2*pi*r;


  printf("\n The area of Cirlce is: %f", area);
  printf("\n The circumferance of Circle is: %f", circ);

  getch();

}