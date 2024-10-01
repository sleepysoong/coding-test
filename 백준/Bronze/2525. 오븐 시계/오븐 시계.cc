#include <stdio.h>

int main() {
    int H, M, C;
    
    // 입력: 현재 시각 (H: 시, M: 분)과 요리 시간 (C: 분)
    scanf("%d %d", &H, &M);
    scanf("%d", &C);
    
    // 분을 더함
    M += C;
    
    // 60분이 넘으면 시간(H)에 추가
    H += M / 60;
    M = M % 60;  // 60분을 넘는 부분은 M으로 남김

    // 24시가 넘으면 다시 0시로 돌아감
    H = H % 24;
    
    printf("%d %d\n", H, M);

    return 0;
}