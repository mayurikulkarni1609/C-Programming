#include<stdio.h>
int main(){
    int a[] = {24, 78, 91, 76, 54, 10, 2, 1};
    int *p, sum = 0;
    for(p=&a[0]; p<=&a[7]; p++)
    {
        sum+=*p;
    }
    printf("Sum of the given array is %d", sum);
}