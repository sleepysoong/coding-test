#include <stdio.h>

int main(void) {
    char s[101];
    scanf("%s", &s);
    int int_a = 'a';
    int int_A = 'A';
    int int_z = 'z';
    int int_Z = 'Z';

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if ((int_a <= s[i] && s[i] <= int_z) || (int_A <= s[i] && s[i] <= int_Z)) {
            count++;
        }else{
            break;
        }
    }

    printf("%d", count);
    return 0;
}

/*
    [추가]
    이 문제에서는 문자가 알파벳으로만 이루어져 있다고 해서 아스키코드를 비교해서 풀었지만
    그냥 string length를 세는 문제였으면 이 날 풀었던 다른 문제들처럼 null이 올때까지 세는 방식으로 할 듯

    ex)
    int length = 0;
    for(int j = 0; j < 1001; j++){
        if(temp[j] == '\0'){ // null일때까지 반복하면서 글자가 몇 글자인지 카운트
            break;
        }
        length++;
    }
*/
