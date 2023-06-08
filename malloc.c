//Sum of element in array using malloc

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *arr, sum = 0;
    printf("Enter the number of element in array: ");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    for (i = 0; i<n; i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
     for (i = 0; i<n; i++){
        sum += arr[i];
    }
    printf("The sum of element in array is %d", sum);
    return 0;
}