#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,s,ar;
printf("Enter 3 sides of triangle:\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area=%d\n",ar);
return 0;
}
