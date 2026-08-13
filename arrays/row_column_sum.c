//generate a code to compute row sum and column sum of a 5*5 matrix
#include<stdio.h>
int main(){
    int arr[5][5] = { {8,3,9,0,10},
                      {3,5,17,1,1},
                      {2,8,6,23,1},
                      {15,7,3,2,9},
                      {6,14,2,6,0} 
                    };
    int row_sum = 0;
    int column_sum = 0;
    // compute row_sum
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++){
             row_sum = row_sum + arr[i][j];
        }
        printf(" %d", row_sum);
        row_sum = 0;
       
    }
    printf("\n");
    //compute column sum
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            column_sum = column_sum + arr[j][i];
        }
        printf(" %d", column_sum);
        column_sum = 0;
    }
    return 0;   
}