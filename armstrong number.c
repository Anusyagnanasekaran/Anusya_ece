#include<stdio.h>
int main()
{
    int num,r,f,p,i,m,sum,u,l;
    printf("Enter the number\n");
    scanf("%d",&num);
    r=num%10;
    f=num/10;
    p=r*r*r;
    i=f%10;
    m=i*i*i;
    u=f/10;
    l=u*u*u;
    sum=p+m+l;
    if(sum==num)
    printf("Armstrong number is %d",sum);
    return 0;
}
