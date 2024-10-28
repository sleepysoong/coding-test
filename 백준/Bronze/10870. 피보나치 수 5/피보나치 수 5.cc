#include <stdio.h>

long fi(int n){
    if(n <= 1){
        return n;
    }
    return fi(n-1) + fi(n-2);
}

int main(void){
    int N;
    scanf("%d", &N);
    printf("%ld", fi(N));
    return 0;
}