#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int isEven(int);

int main(){
    FILE *fp1,*fp2,*fp3;
    int number;
    fp1 = fopen("Number.txt","r");
    if (fp1 == NULL){
        printf("File not opened");
        getch();
        exit(0);
    }
    fp2 = fopen("even.txt","w");
    if (fp2 == NULL){
        printf("File not opened");
        getch();
        exit(0);
    }
    fp3 = fopen("odd.txt","w");
    if (fp3 == NULL){
        printf("File not opened");
        getch();
        exit(0);
    }
    while (fscanf(fp1, "%d", &number) == 1){
        if(isEven(number)){
            fprintf(fp2,"%d\n", number);
        }else{
            fprintf(fp3,"%d\n", number);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}

int isEven(int n){
    int isEven = 1;
    if (n%2 != 0){
        isEven = 0;
    }
    return isEven;
}