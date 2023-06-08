#include <stdio.h>

int main(){
    int i;
    for (i = 0; i<10; i++){
        printf("%d\t",i+1);
        if (i == 4){
            break;
        }
    }
    return 0;
}