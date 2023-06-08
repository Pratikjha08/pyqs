/*Write a program to demonstrate the following menu-driven program. The user will provide an integer and alphabet for making choice and the corresponding task has to be performed according as follow:

Find Odd or Even
Find Positive or Negative
Find the Factorial value
Exit

The choice will be displayed until the user will give “D” as a choice.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char ch;
    do{
        printf("Enter operation(A, B, C, D): ");
        scanf("%c",&ch);
        if (ch == 'D'){
            printf("Press any key to enter the program: ");
            getch();
            exit(0);
        }
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        if (ch == 'A'){
            if (num%2 == 0){
                printf("The number is even\n");
            }else{
                printf("The number is odd\n");
            }
        }

        if (ch == 'B'){
            if(num > 0){
                printf("The number is positive\n");
            }else if(num < 0){
                printf("The number is negative\n");
            }else{
                printf("The number is zero\n");
            }
        }

        if (ch == 'C'){
            int fact = 1, i = 1;
            for (i; i<=num; i++){
                fact = fact*i;
            }
            printf("The factorial is %d\n",fact);
        }
        fflush(stdin);
    } while (ch != 'D');
    return 0;
}