#include <stdio.h>

int main(void){
    int byte;
    scanf("%d", &byte);
    for(int i = 0; i < byte / 4; i++) {
        printf("long ");
    }
    printf("int");
    return 0;
}
