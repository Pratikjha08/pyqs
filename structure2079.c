#include <stdio.h>

typedef struct employee{
    char name[40];
    char address[40];
    int age;
    float salary;
}e;

int main(){
    e e1[3];
    int i; 
    for (i=0; i<3 ; i++){
        printf("Enter name: ");
        scanf("%s",e1[i].name);
        printf("Enter address: ");
        scanf("%s",e1[i].address);
        printf("Enter age: ");
        scanf("%d",&e1[i].age);
        printf("Enter salary: ");
        scanf("%f",&e1[i].salary);
    }
    printf("name\taddress\tage\tsalary\n");
    for (i=0; i<3 ; i++){
        if (e1[i].age>=40 && e1[i].age<=50 && strcmp(e1[i].address, "Kathmandu") == 0){
            printf("%s\t%s\t%d\t%f\n",e1[i].name,e1[i].address,e1[i].age,e1[i].salary);
        }
    }
    return 0;
}