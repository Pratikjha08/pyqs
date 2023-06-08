#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum = 0;
    float avg;
    for (i = 0; i<10; i++){
        sum += arr[i];
    }
    avg = (float)sum/10;
    printf("The sum is %d and the average is %.2f",sum, avg);
    return 0;
}