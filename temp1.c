#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i = 10;
    while (i >= 1)
    {
       printf("%d X %d = %d\n",n,i,n*i);
       i--;
    }
    
}