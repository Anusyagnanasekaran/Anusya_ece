#include<stdio.h>
void main()
{
int num,flag=0,k;
printf("Enter the number\n");
scanf("%d",&num);
for(k=2;k<=num/2;k++)
{
if(num%k==0)
flag=1;
break;
}
if(flag==0)
printf("It is a prime number\n");
else
printf("It is not a prime number\n");
}
