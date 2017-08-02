#include<stdio.h>
void main()
{

    int num,temp=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        temp++;
    }
    printf("%d",temp++);
}
