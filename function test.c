#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y,z;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("The result is:%d",z);
    return 0;
}