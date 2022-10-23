#include<stdio.h>
#include<conio.h>
void pattern(int a,int b,int temp);
void main()
{
    int n;
    printf("Enter the number of lines to be printed:\n");
    scanf("%d",&n);
    pattern(n,1,1);
    getch();
}
void pattern(int a,int b,int temp)
{
    if(a==0)
    {}
    else if(b>0)
    {
        printf("*");
        pattern(a,b-1,temp);
    }
    else
    {
        printf("\n");
        pattern(a-1,temp+1,temp+1);
    }
}
