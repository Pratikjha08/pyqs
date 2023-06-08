#include <stdio.h>

int main(){
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, identical = 1;
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            if (a[i][j] != b[i][j]){
                identical = 0;
                break;
            }
        }
    }
    if (identical){
        printf("The matrix are identical");
    }else{
        printf("The matrix are not identical");
    }
    return 0;
}