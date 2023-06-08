//Reads the specified part of the file 

#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("demo3.txt","r");
    char buffer[10];
    fread(buffer,1,9,fp);
    buffer[9] = '\0';
    printf("The first 9 character of the file is %s",buffer);
    fclose(fp);
    return 0;
}