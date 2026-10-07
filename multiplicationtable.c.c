#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
}