// WAP TO CHECK LOOP YEAR OR NOT
#include<stdio.h>
int main()
{
int y;//y=year
printf("enter any year");
scanf("%d",&y);

if(y%400==0 || y%4== 0 && y%4!= 0)
{
    printf("it is loop yaer");
}
else
{
    printf("it is not loop year");
}
return 0;
}