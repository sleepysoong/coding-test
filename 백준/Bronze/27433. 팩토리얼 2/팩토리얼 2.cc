#include <stdio.h>

long fact(int n){
    if(n <= 1){
        return 1; // 0! = 1
    }
    return n * fact(n-1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%ld", fact(n));
    return 0;
}