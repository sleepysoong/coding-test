#include <stdio.h>

int check(int year){
    if(year % 400 == 0){
        return 1;
    }
    if(year % 4 == 0 && year % 100 != 0){
        return 1;
    }
    return 0;
}
int main(){
    int year;
    scanf("%d", &year);
    printf("%d", check(year));
}