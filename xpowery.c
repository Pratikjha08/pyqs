#include <stdio.h>

int main(){
    int power, base, i, ans=1; 
    printf("Enter base and power: ");
    scanf("%d%d",&base,&power);
    for (i = 1; i<=power; i++){
        ans *= base;
    }
    printf("%d to the power %d is %d",base,power,ans);
    return 0;
}