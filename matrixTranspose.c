#include <stdio.h>

const int M = 3;

void print(int a[M][M]);

int main(){
    int a[M][M], t[M][M], i, j;
    for (i = 0; i<M; i++){
        for (j = 0; j<M; j++){
            printf("Enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i<M; i++){
        for (j = 0; j<M; j++){
            t[i][j] = a[j][i];
        }
    }
    printf("The matrix before transposing is: \n");
    print(a);
    printf("The matrix after transposing is: \n");
    print(t);
    return 0;
}

void print(int a[M][M]) {
    int i, j;
    for (i = 0; i<M; i++){
        for (j = 0; j<M; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}