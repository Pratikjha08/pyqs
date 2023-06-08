#include <stdio.h>

typedef struct address{
    char city[20];
}add;

typedef struct employee{
    char name[40];
    add a;
}emp;

int main(){
    emp sde;
    printf("The employee's name is: ");
    scanf("%s",sde.name);
    printf("The employee's city is: ");
    scanf("%s",sde.a.city);
    printf("displaying result\n");
    printf("The name of the employee is %s\n",sde.name);
    printf("The city of the employee is %s",sde.a.city);
    return 0;
}