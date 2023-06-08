//WAP to display second largest element in the array

#include <stdio.h>

int main(){
    int arr[5] = {1, 10, 6, 2, 9};
    int i, j;
    for(i=0; i<4; i++){
        for (j = i+1; j<5; j++){
            if (arr[j]>arr[i]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The second largest element in array is %d",arr[1]);
    return 0;
}