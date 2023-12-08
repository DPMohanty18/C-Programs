#include<stdio.h>
int main()
{
int n1,n2,t;
printf("Enter the numbers:\n");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("n1=%d , n2=%d",n1,n2);
return 0;
}
