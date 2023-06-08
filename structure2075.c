#include <stdio.h>

typedef struct rectangle{
    float lenght;
    float breadth;
}r;

int main(){
    r r1;
    printf("Enter lenght: ");
    scanf("%f",&r1.lenght);
    printf("Enter breadth: ");
    scanf("%f",&r1.breadth);
    float area = r1.lenght*r1.breadth;
    printf("The length is %.2f breadth is %.2f and area is %.2f",r1.lenght,r1.breadth,area);
    return 0;
}