#include <stdio.h>

int main() {
    int a, b, c;
    
    // 세 개의 주사위 눈 입력받기
    scanf("%d %d %d", &a, &b, &c);
    
    int reward = 0;

    if (a == b && b == c) {
        // 세 개가 모두 같은 경우
        reward = 10000 + a * 1000;
    } else if (a == b || a == c) {
        // 두 개가 같은 경우 (a가 b 또는 c와 같은 경우)
        reward = 1000 + a * 100;
    } else if (b == c) {
        // 두 개가 같은 경우 (b와 c가 같은 경우)
        reward = 1000 + b * 100;
    } else {
        // 모두 다른 경우
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        reward = max * 100;
    }
    
    // 상금 출력
    printf("%d\n", reward);
    
    return 0;
}