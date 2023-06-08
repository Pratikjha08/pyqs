//WAP to find the greatest number between 2 numbers and return as pointer

#include <stdio.h>

int *getMax(int *, int *);

int main(){

    int x,y;
    printf("Enter value of x and y: ");
    scanf("%d%d",&x,&y);
    int *max;
    max = getMax(&x, &y);
    printf("Max value: %d\n", *max);
    return 0;
}

int *getMax(int *m, int *n){

    if (*m > *n){
        return m;
    }else{
        return n;
    }

}