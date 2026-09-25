#include<stdio.h>
int main()
{
    int a,b,sub,mul,div;
    printf("Enter two a,b values:");
    scanf("%d%d",&a,&b);
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("subtraction=%d\nmultiplication=%d\ndivison=%d\n",sub,mul,div);
}