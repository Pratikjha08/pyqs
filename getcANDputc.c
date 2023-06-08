//WAP to copy demo1.txt into demo2.txt

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *fp1,*fp2;
    fp1 = fopen("Demo1.txt","r");
    fp2 = fopen("Demo2.txt","w");
    if (fp1 == NULL || fp2 == NULL){
        printf("file not opened");
        getch();
        exit(0);
    }
    char ch;
    while (!feof(fp1)){
        ch = getc(fp1);
        putc(ch,fp2);
    }
    return 0;
}