// WAP TO CALCULATE FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        fact *=i;

    }
    printf("\n fact of a number is %d",fact);
    return 0;

}