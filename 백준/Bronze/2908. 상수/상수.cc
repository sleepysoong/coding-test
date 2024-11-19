#include <stdio.h>

void reverse(int *a){
    int temp = *a;
    *a = (temp % 10) * 100 + (temp / 10 % 10) * 10 + (temp / 100);
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    reverse(&a);
    reverse(&b);
    printf("%d", (a < b ? b : a));
    return 0;
}