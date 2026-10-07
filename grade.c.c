#include<stdio.h>
int  main()
{
    int marks;
    printf("ENTER MARKS:");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("A GRADE");
    }
    else if(marks>=80)
    {
        printf("B GRADE");
    }
    else if(marks>=70)
    {
        printf("C GRADE");
    }
    else if(marks>=60)
    {
        printf("D GRADE");
    }
    else if(marks>=50)
    {
        printf("E GRADE");
    }
    else
    {
        printf("FAIL");
    }
}
