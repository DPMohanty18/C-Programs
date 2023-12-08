/*When the sum of the cube of the individual digits of a number
 is equal to that number, the number is called Armstrong number. For example 153.
Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
#include <stdio.h>
#include<math.h>

int main(){
    int num,r,sum,temp,count;
    int stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);

    printf("Armstrong numbers in given range are: ");
    for(num=stno;num<=enno;num++){
         temp=num;
         sum = 0;
        while (num != 0){
        num /= 10;
        ++count;
        } 
        num=temp;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+pow(r,count);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
return 0;
}
