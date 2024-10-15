#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[101]; // 최대 100개의 바구니를 위한 배열
    for (int i = 1; i <= N; i++) {
        baskets[i] = i; // 바구니 초기화 (1부터 N까지)
    }

    for (int i = 0; i < M; i++) {
        int L, R;
        scanf("%d %d", &L, &R);
        
        // 바구니 L부터 R까지 뒤집기
        while (L < R) {
            int temp = baskets[L];
            baskets[L] = baskets[R];
            baskets[R] = temp;
            L++;
            R--;
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}