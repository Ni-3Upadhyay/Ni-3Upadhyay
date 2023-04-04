
#include <stdio.h>
#include<stdlib.h>

int main(){

//  Decleration of array
    int a[5];              // an array of size 5 is declared in a stack with grabage values

//  Decleration and initailisation of an array
    int arr[5] = {2, 4,5,7,9};  // an array of size 5 will be created with these values

    int ar[5] = {3,4};           // an array is initialised having values 3, 4 and then all values are zero

    int arrr[] = {3,4,5,6,7,8};  // an array will be declared and size is given accordingly

//  To access all elements of an array we use loop
    for(int i=0; i<5;i++){
        printf("%d ",arr[i]);       // we can use both method to access an element
        printf("%d ",i[arr]);

        printf("%d ", *(arr+i));    // another way to access an array element
    }

//    ******************** Array In Heap (or run time)************************

    int * p;
    p = (int *) malloc(sizeof(int)*8);          // array created at run time

    printf("Enter the elements of array \n");
    for(int i=0; i<8; i++){
        scanf("%d", &p[i]);         // to give the values.
    }

    printf("%d ", p[4]);            // to acces a particular elements

// ****************** How to Increase size of an array (we can't) **************
// we have to create a new array of larger size and all the values are given to it.

int i;
int * q = (int *) malloc(sizeof(int)* 12);      // new array of larger size created.

for(i=0; i<8; i++){
    q[i] = p[i];                                // all the values are given to larger array
}

p = q;
q = NULL;
free(q);

p[i] = 56; i++; 
p[i] = 78; i++;
p[i] = 78; i++;
p[i] = 78; i++;

for(int i=0; i<12;i++){
        printf("%d ",p[i]); 
    }




    return 0;
}