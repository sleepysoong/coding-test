#include <stdio.h>

int main(void)
{
    int basket[101] = {0,}; // {0}으로 해도 된다
    int N,M,i,j,k;

    scanf("%d %d", &N, &M);

    for (int a = 0; a < M; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(int b = i; b <= j; b++){
            basket[b] = k;
        }
    }

    for (int c = 1; c <= N; c++){
        printf("%d ", basket[c]);
    }

    return 0;
}