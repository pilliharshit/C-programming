#include<stdio.h>
int  main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    if ( n % 2 == 0)
        printf("%d is EVEN",n);
    else
        printf("%d is ODD",n);
}
