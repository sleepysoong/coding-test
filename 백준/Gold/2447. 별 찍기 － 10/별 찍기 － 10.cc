#include <stdio.h>

void draw_stars(char arr[][2188], int x, int y, int size) {
    if (size == 1) {
        arr[x][y] = '*';
        return;
    }
    
    int new_size = size / 3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                // 중앙 부분은 비워둠
                continue;
            }
            draw_stars(arr, x + i * new_size, y + j * new_size, new_size);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    // n의 최대값이 2187이므로 배열 크기를 미리 지정함
    char arr[2188][2188];
    
    // 배열을 공백으로 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = ' ';
        }
    }
    
    // 패턴 그리기
    draw_stars(arr, 0, 0, n);
    
    // 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}