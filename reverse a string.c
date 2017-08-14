#include<stdio.h>
#include<string.h>
int main()
{

    char a[30];
    printf("Enter the string\n");
    scanf("%s",&a);
    printf("%s is the reversed string\n",strrev(a));
    return 0;
    
}

