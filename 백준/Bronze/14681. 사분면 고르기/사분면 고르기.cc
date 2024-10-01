#include <stdio.h>

int check(int x, int y){
    if(x > 0){
        return y > 0 ? 1 : 4;
    }
    return y > 0 ? 2 : 3;
}

int main(){
    int x, y;
    scanf("%d\n%d", &x, &y);
    printf("%d", check(x, y));
}