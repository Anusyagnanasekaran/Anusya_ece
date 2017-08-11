#include <stdio.h>
int main()
{
    int n, r= 0,d;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        d= n%10;
        r=r*10+d;
        n=n/10;
    }

    printf("Reversed Number = %d",r);

    return 0;
}
