// WRITE A PROGRAM TO take an array of elements rom the user of size 'n' and print sum of all elements of an array
#include<stdio.h>
int main(){
    int n;
    printf("enetr the size of an array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("sum of all the elements of the array is %d",sum);
    return 0;
}