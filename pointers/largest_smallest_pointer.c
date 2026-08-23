#include<stdio.h>
void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    for(int i=1; i<len; i++)
    {
        if(arr[i]>*max)
        *max = arr[i];
        if(arr[i]<*min)
        *min = arr[i];
    }
}
int main()
{
    int a[] = {40,10,23,46,76,88,911,2,1,9999};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum value in the array is %d and Maximum value in the array is %d", min, max);
    return 0;
}
