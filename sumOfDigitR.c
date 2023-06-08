//Sum of digit using recursion

#include <stdio.h>

int sum(int);

int main(){
    int n, ans;
    printf("Enter digit: ");
    scanf("%d",&n);
    ans = sum(n);
    printf("The sum of digit is %d", ans);
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n%10 + sum(n/10);
    }
}