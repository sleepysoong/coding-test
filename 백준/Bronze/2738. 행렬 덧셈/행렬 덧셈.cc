#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int result[N][M];
    int temp;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &result[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &temp);
            result[i][j] += temp;
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}