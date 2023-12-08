#include<stdio.h>
int main()
{
float l,b,peri,area;
printf("Enter length and breadth of rectangle:\n");
scanf("%f%f",&l,&b);
peri=2*(l+b);
area=l*b;
printf("Perimeter=%f , Area=%f",peri,area);
return 0;
}
