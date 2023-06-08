#include <stdio.h>

int main(){
    int i, sum=0, n = 1;;
    for (i = 0; i<10; i++){
        sum += n;
        n = n+2;
    }
    printf("The sum of 1st 10 odd number is %d",sum);
    return 0;
}