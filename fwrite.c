//To write line into the file

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char arr[5] = {'a','b','c','d','e'};
    fp = fopen("demo4.txt","w");
    fwrite(arr,1,5,fp);
    fclose(fp);
    return 0;
}