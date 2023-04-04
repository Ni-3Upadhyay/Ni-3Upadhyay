# include<stdio.h>
# include<stdlib.h>

int main(){

// ******************** 2D array in stack **********************
    // Decleration of a 2D array -
    int a[3][5];            // an array will be created in stack

    a[2][3] = 45;         // to access any element in an array

    // Decleration and initialisation -
    int A[2][4] = {{1,2,3,4},{5,6,7,8}};  // here the array will be created in stack

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            printf("%d ", A[i][j]);   // to print the elements of an array
        }
        printf("\n");
    }


//  ********** Array pointer is in stack but actual pointer in heap *************

    int * Arr[3];      // no. of rows 

    Arr[0] = (int *) malloc(sizeof(int)* 4);
    Arr[1] = (int *) malloc(sizeof(int)* 4);        // no. of columns
    Arr[2] = (int *) malloc(sizeof(int)* 4);

printf("Enter the elements :\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &Arr[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }

//  ********** Array completly in heap using double pointer ***************

    int **array = (int **) malloc(sizeof(int)*3);   // no. of rows
    array[0] = (int *)malloc(sizeof(int)*4);
    array[1] = (int *)malloc(sizeof(int)*4);
    array[2] = (int *)malloc(sizeof(int)*4);

printf("Enter the elements :\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}