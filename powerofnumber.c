#include<stdio.h>
#include<conio.h>
int main()
{
int base,exponential,i,result;
printf("enter the base and exponential values");
scanf("%d %d",&base,&exponential);
for(i=0;i<exponential;i++)
{
result=1;
result=result*base;
}
printf("%d^%d =%d",base,exponential,result);
return 0;
}
