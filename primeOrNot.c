//Check weather a number is prime or not

#include <stdio.h>

int main(){
    int num, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num == 1){
        printf("1 is neither prime nor composite: ");
    }
    for (i = 2; i*i<num; i++){
        if (num%i == 0){
            prime = 0;
        }
    }
    if(prime){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }
    return 0;
}