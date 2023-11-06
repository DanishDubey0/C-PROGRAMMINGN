// WAP TO CHECK NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int a,i=2;
    scanf("%d",&a);
    while(i<a)
    {
        if(a%i==0)
        {
            printf(" it is not a prime number");
            break;
        }
        else{
            printf("it is a prime number");
            break;
        }
    }
           i++;
    return 0;
    
}