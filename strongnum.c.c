#include<stdio.h>
int main()
{
    int n,temp,sum=0,fact,digit,i;
    printf("Enter a number:");
    scanf("%d",&n);
    temp = n;
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(n>=0 && sum==n)
        printf("strong number");
    else
        printf("not a strong number");  
}