//
//  main.c
//  2D-pattern
//
//  Created by Peter Rodriguez.
//
/*
 
 Takes values into an array.Then extracts diagonal elements of a square matrix and put into a 1-dimensional array.

 */
#include <stdio.h>

int main() {

    int arr1 [3][3];
    int arr2 [3];
    int i, j, n = 0;

    printf("Please enter elements into the matrix");
    printf("\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("element - [%d], [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
            if(i == j)
            {
                arr2[n] = arr1[i][j];
                n++;
            }
        }
    }

    for(i = 0; i<3; i++)
    {
        for(j = 0; j< 3; j++)
        {
            printf("%3d", arr1[i][j]);
            
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i++)
    {
        printf("\n%4d", arr2[i]);
    }

    printf("\n");

    return 0;
}


