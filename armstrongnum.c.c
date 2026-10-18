#include<stdio.h>
int main()
{
    int n,temp,digit,sum=0,count=0,power,i;
    printf("Enter a number:");
    scanf("%d",&n);
    temp = n;
    int t = n;
    do 
    {
        count ++;
        t/=10;
    }
    while(t!=0);
    t=n;
    while(t>0)
    {
        digit=t%10;
        power=1;
        for(i=1;i<=count;i++)
        {
            power=power*digit;
        }
        sum=sum+power;
        t=t/10;
    }
    if(n>=0 && sum==n)
        printf("Armstrong number");
    else
        printf("not  an armstrong number");
}
