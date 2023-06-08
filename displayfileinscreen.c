//WAP to display the content of file on screen and prompt user for the source file

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char fname[20];
    printf("Enter file name: ");
    scanf("%s",fname);
    FILE *fp;
    fp = fopen(fname,"r");
    if (fp == NULL){
        printf("File not found");
        getch();
        exit(0);
    }
    char ch;
    while (!feof(fp)){
        ch = getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}