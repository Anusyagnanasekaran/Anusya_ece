#include<stdio.h>
int main()
{
    int n, nxtno, f=0, s=1, i;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        printf("%d\t", f);
        nxtno=f+s;
        f=s;
        s=nxtno;
    }
    
     
    return 0;
}
