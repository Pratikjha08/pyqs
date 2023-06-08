#include <stdio.h>

int main(){
    int i;
    for (i = 0; i<10; i++){
        printf("%d \t",i);
        if(i == 2){
            goto here;
        }
    }
    here:
        printf("\nThis is where it'll come after jump");
    return 0;
}