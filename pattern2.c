#include<stdio.h>
int main()
{
    int r,c,n=1;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=r;c++)
        {
        printf("%d",n);
        n++;
        }
        printf("\n");
    }
    return 0;
}