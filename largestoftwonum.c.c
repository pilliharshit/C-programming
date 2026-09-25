#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b values:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is the largest number",a);
    else if(a<b)
        printf("%d is the largest number",b);
    else
        printf("Both numbers are equal");
}
