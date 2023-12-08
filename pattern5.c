#include<stdio.h>
int main()
{
    int r,k,c,x;
    for (r=1;r<=3;r++)
    {
        for(k=1;k<=3-r;k++)
        printf(" ");
        for(c=1;c<=r;c++)
        printf("%d",c);
        for(x=r-1;x>=1;x--)
        printf("%d",x);
        printf("\n");
    }
    for(r=2;r>=1;r--)
    {
        for(k=1;k<=3-r;k++)
        printf(" ");
        for(c=1;c<=r;c++)
        printf("%d",c);
        for(x=r-1;x>=1;x--)
        printf("%d",x);
        printf("\n");
    }
    return 0;
}
