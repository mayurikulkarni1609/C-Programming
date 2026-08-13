//C program to reverse a series of numbers using array
#include<stdio.h>
int main()
{
    int n,a[10];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }   
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);}
        return 0;
}

