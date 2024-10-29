#include <stdio.h>

void cantor_set(char *str, int start, int length) {
    if (length == 1) {
        str[start] = '-';
        return;
    }
    
    int third = length / 3;
    cantor_set(str, start, third);             // 첫 번째 부분
    
    // 두 번째 부분 (공백) 채우기
    for (int i = start + third; i < start + 2 * third; i++) {
        str[i] = ' ';
    }

    cantor_set(str, start + 2 * third, third); // 세 번째 부분
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int length = 1;
        for (int i = 0; i < n; i++) {
            length *= 3;
        }
        
        char str[length + 1];
        
        // 전체 배열을 '-'로 초기화
        for (int i = 0; i < length; i++) {
            str[i] = '-';
        }
        str[length] = '\0'; // 문자열 끝 표시
        
        cantor_set(str, 0, length);
        printf("%s\n", str);
    }
    return 0;
}