//Use to take formatted input from the file same as scanf() did in standard i/o

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int a;
    float b;
    char c;
    fp = fopen("Demo1.txt","r");
    if (fp == NULL){
        printf("File not opened");
        getch();
        exit(0);
    }
    fscanf(fp,"%d %f %c",&a, &b, &c);
    printf("The content present in the demo file is %d %.2f %c",a, b, c);
    return 0;
}