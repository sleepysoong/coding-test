#include <stdio.h>

int A[500000]; // 배열 A, 최대 크기 500,000
int tmp[500000]; // 병합 과정에서 사용할 임시 배열
int count = 0; // 저장 횟수 카운터
int K; // 찾고자 하는 K번째 저장 위치
int result = -1; // K번째 저장된 값을 저장할 변수

void merge(int A[], int p, int q, int r) {
    int i = p, j = q + 1, t = 0;
    
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    
    while (i <= q) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];
    
    i = p; t = 0;
    while (i <= r) {
        A[i++] = tmp[t++];
        count++;
        if (count == K) result = A[i - 1]; // K번째 저장되는 값을 찾으면 저장
    }
}

void merge_sort(int A[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    int N;
    scanf("%d %d", &N, &K); // 배열 크기 N과 찾고자 하는 K 입력 받기
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    merge_sort(A, 0, N - 1);
    
    printf("%d\n", result); // 결과 출력, K번째 저장된 값이 없으면 -1 출력
    
    return 0;
}
