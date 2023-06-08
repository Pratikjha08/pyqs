#include <stdio.h>
#include <string.h>

typedef struct Book{
    char name[40];
    char author[40];
    char publisher[40];
}b;

int main(){
    b b1[3];
    int i;
    for (i = 0; i<3; i++){
        printf("Enter name: ");
        scanf("%s",b1[i].name);
        printf("Enter author: ");
        scanf("%s",b1[i].author);
        printf("Enter publisher: ");
        scanf("%s",b1[i].publisher);
    }
    printf("Name of books from XYZ publisher\n");
    for (i = 0; i<3; i++){
        if(strcmp(b1[i].publisher,"XYZ") == 0){
            printf("%s\n",b1[i].name);
        }
    }
    return 0;
}