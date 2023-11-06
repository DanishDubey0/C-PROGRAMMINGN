#include<stdio.h>
int main()
{
    int n,f=0,s=1,i;
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("%d\n",f);
        int next=f+s;
        f=s;
        s=next;
    }
    return 0;
}