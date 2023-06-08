//Sum and average of 1st n natural number 

#include <stdio.h>

int main(){
    int n, i, sum = 0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i = 1; i<=n; i++){
        sum += i;
    }
    avg = (float)sum/n;
    printf("The sum is %d and average is %.2f",sum,avg);
    return 0;
}