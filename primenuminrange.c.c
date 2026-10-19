#include<stdio.h>
int main()
{
    int n,prime,start,end,i;
    printf("Enter start  and end values:");
    scanf("%d%d",&start,&end);
    for(n=start;n<=end;n++)
    {
        if(n<2)
        continue;
        prime=1;
        
        for(i=2;i<=n/i;i++)
        {
            if(n%i == 0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
            printf("%d\n",n);
    }
}