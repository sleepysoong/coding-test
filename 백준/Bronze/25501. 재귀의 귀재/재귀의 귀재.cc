#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r, int *count) {
    (*count)++; // 재귀 호출 횟수 증가
    if (l >= r) return 1;                // 양끝을 다 검사했다면 팰린드롬
    else if (s[l] != s[r]) return 0;     // 양끝이 다르면 팰린드롬이 아님
    else return recursion(s, l + 1, r - 1, count); // 재귀적으로 양끝을 검사
}

int isPalindrome(const char *s, int *count) {
    *count = 0;
    return recursion(s, 0, strlen(s) - 1, count);
}

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스 개수 입력 받기
    
    while (T--) {
        char str[1001]; // 문자열의 최대 길이가 1000이므로 1001 크기 설정
        int count = 0;
        scanf("%s", str); // 문자열 입력
        
        int result = isPalindrome(str, &count);
        printf("%d %d\n", result, count); // 팰린드롬 여부와 재귀 호출 횟수 출력
    }
    
    return 0;
}