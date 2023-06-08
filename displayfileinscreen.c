//WAP to display the content of file on screen and prompt user for the source file and repropt the user to enter correct file name if worng is entered

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int chance = 0;
    char fname[20];
    printf("Enter file name: ");
    scanf("%s",fname);
    FILE *fp;
    fp = fopen(fname,"r");
    while (fp==NULL && chance<3){
        printf("Enter correct filename: ");
        scanf("%s",fname);
        fp = fopen(fname,"r");
        chance++;
    }
    char ch;
    while (!feof(fp) && !(fp == NULL)){
        ch = getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}