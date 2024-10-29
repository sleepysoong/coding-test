#include <stdio.h>

void 하노이(int 원판_수, int 시작, int 끝, int 보조) {
    if (원판_수 == 1) {
        printf("%d %d\n", 시작, 끝);
        return;
    }
    하노이(원판_수 - 1, 시작, 보조, 끝);
    printf("%d %d\n", 시작, 끝);
    하노이(원판_수 - 1, 보조, 끝, 시작);
}

int main() {
    int 원판_수;
    scanf("%d", &원판_수);
    printf("%d\n", (1 << 원판_수) - 1); // 최소 이동 횟수: 2^n - 1
    하노이(원판_수, 1, 3, 2); // 1번 기둥에서 3번 기둥으로 옮기기
    return 0;
}