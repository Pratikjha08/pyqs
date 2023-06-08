//Passing pointer as argument

#include <stdio.h>

void swap(int *, int *);

int main(){
    int n1, n2;
    printf("Enter 2 numbers for swapping: ");
    scanf("%d%d",&n1,&n2);
    printf("The numbers before swapping are %d and %d\n",n1,n2);
    swap(&n1,&n2);
    printf("The numbers after swapping are %d and %d",n1,n2);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}