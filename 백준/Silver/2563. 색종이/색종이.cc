#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int paper[100][100] = {0}; // 100x100 도화지, 0으로 초기화
    int x, y;
    
    // 색종이 붙이기
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        // 색종이 영역을 1로 표시
        for (int row = x; row < x + 10; row++) {
            for (int col = y; col < y + 10; col++) {
                paper[row][col] = 1;
            }
        }
    }
    
    // 면적 계산
    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }
    
    printf("%d\n", area);
    
    return 0;
}