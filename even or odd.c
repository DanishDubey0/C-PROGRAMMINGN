#include<stdio.h>
int main()
{
    int a;
    printf("enter an integer:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("it is even");
    }
    else
    {
      printf("it is odd");
    }
    return 0;
}
