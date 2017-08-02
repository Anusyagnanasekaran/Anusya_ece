#include<stdio.h>
#include<string.h>
void main()
{

    char c;
    printf("Enter the character\n");
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        printf("The entered character is an alphabet");
    else
        printf("The entered character is not an alphabet");
}
