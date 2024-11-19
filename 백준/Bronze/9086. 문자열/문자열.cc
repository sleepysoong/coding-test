#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    char temp[1001];
    for(int i = 0; i < t; i++){
        scanf("%s", &temp);
        int length = 0;
        for(int j = 0; j < 1001; j++){
            if(temp[j] == '\0'){ // null일때까지 반복하면서 글자가 몇 글자인지 카운트
                break;
            }
            length++;
        }
        printf("%c%c\n", temp[0], temp[length - 1]);
    }
    return 0;
}