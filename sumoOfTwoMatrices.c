#include <stdio.h>

int main(){
    int a[3][3], b[3][3], s[3][3], i, j;
    printf("Entering value of 1st matrix: \n");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            printf("Enter element: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entering value of 2nd matrix: \n");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            printf("Enter element: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("displaying result: \n");
    for (i = 0; i<3; i++){
            for (j = 0; j<3; j++){
                s[i][j] = a[i][j]+b[i][j];
                printf("%d \t",s[i][j]);
            }
            printf("\n");
        }
    return 0;
}