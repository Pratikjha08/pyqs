#include <stdio.h>

int sum(int, int);

int main(){
    int n1, n2;
    printf("Enter both numbers for sum: ");
    scanf("%d%d",&n1,&n2);
    printf("The sum is %d and %d is %d",n1, n2, sum(n1,n2));
    return 0;
}

int sum(int a, int b){
    return a+b;
}