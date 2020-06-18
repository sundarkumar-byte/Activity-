#include <stdio.h>

#define m 4
#define n 4


void row_sum(int arr[m][n])
{

    int i,j,sum = 0;

    printf("\nFinding Sum of each row:\n\n");


    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {


            sum = sum + arr[i][j];
        }


        printf("Sum of the row %d = %d\n",i,sum);



        sum = 0;
    }
}


void column_sum(int arr[m][n])
{

    int i,j,sum = 0;

    printf("\nFinding Sum of each column:\n\n");


    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {


            sum = sum + arr[j][i];
        }


        printf("Sum of the row %d = %d\n",i,sum);

        sum = 0;
    }
}


int main()
{

    int i,j;
    int arr[m][n];


    int x = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = x++;


    row_sum(arr);


    column_sum(arr);

    return 0;
}
