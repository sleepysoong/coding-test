#include <stdio.h>

int main() {
    int arr[9][9];
    int max_value = 0;
    int max_row = 0, max_col = 0;

    // 배열 입력 및 최댓값 찾기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            // 현재 값이 최댓값보다 크면 최댓값 갱신 및 위치 저장
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // 최댓값 출력
    printf("%d\n", max_value);
    // 위치 출력 (1부터 시작하므로 +1)
    printf("%d %d\n", max_row + 1, max_col + 1);

    return 0;
}