#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("a is the largest number");
    else if((b>a)&&(b>c))
    printf("b is the largest number");
    else 
    printf("c is the largest number");
    return 0;
}
   
