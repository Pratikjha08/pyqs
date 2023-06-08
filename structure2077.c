#include <stdio.h>

typedef struct course{
    char name[40];
    int code;
    float chour;
}c;

int main(){
    c c1[3];
    int i;
    for (i = 0; i<3; i++){
        printf("Enter course name: ");
        scanf("%s",c1[i].name);
        printf("Enter course code: ");
        scanf("%d", &c1[i].code);
        printf("Enter credit hour: ");
        scanf("%f",&c1[i].chour);
    }
    printf("name \t code \t credit hour\n");
    for (i = 0; i<3; i++){
        if (c1[i].chour > 3){
            printf("%s \t %d \t %.2f \n",c1[i].name,c1[i].code,c1[i].chour);
        }
    }
    return 0;
}

