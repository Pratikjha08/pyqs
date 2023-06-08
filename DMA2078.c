//Product of element in an array using DMA

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, n, i, product = 1;
    printf("Enter the number of element in the array: ");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    for (i = 0; i<n; i++){
        printf("Enter element: ");
        scanf("%d",(arr+i));
    }
    for (i = 0; i<n; i++){
        product *= *(arr+i);
    }
    printf("The product of element in the array is %d",product);
    return 0;
}