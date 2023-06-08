//Used for formatted i/o for file just like printf in standard i/o

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("Demo1.txt","w");
    if (fp == NULL){
        printf("The is error opening in file");
        getch();
        exit(0);
    }
    int a = 1;
    float b = 1.1;
    char c = 'a';
    fprintf(fp,"%d %.2f %c",a,b,c);
    fclose(fp);
    return 0;
}