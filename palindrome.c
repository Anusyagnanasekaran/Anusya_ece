#include<stdio.h>
void main()
{
int num,t,d,r=0;
scanf("%d",&num);
t=num;
while(t!=0)
{
d=t%10;
t=t/10;
r=r*10+d;
}
if(num==r)
printf("The number is a palindrome");
else
printf("The number is not a palindrome");
}
