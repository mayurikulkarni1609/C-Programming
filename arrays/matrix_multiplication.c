#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int sum = 0;
    printf("Enter the rows and columns of matrix a:\n ");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter elements of matrix a:\n ");
     for(int i=0; i<arows; i++)
    {
        for(int j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix b:\n ");
    scanf("%d %d", &brows, &bcolumns);
    printf("Enter elements of matrix b:\n ");
     for(int i=0; i<arows; i++)
    {
        for(int j=0; j<acolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(acolumns!=brows)
    printf("These matrices can't be multiplied\n");
    else{
        for(int i=0; i<arows; i++)
        {
            for(int j=0; j<bcolumns; j++)
            {
                for(int k=0; k<brows; k++)
                {
                    sum+= a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
    }
    printf("Resultant matrix:\n");
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}