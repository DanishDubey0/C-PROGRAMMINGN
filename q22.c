// WRITE A PROGRAM TO CONVERT UPPERCASE TO LOWERCASE
#include<stdio.h>
int main ()
{
    char uppercase ='A', lowercase;
    lowercase= uppercase | 32;
    printf("%c",lowercase);
    return 0;
}