#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural numbers is:%d",sum);
}