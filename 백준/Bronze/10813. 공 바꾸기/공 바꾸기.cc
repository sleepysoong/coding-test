#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    
    int baskets[N+1];
    
    for(int i=1; i<=N; i++){
        baskets[i] = i;
    }
    
    int a, b, temp;
    
    for(int j=0; j<M; j++){
        scanf("%d %d", &a, &b);
        temp = baskets[a];
        baskets[a] = baskets[b];
        baskets[b] = temp;
    }
    
    for(int k=1; k<=N; k++){
        printf("%d ", baskets[k]);
    }
    
    return 0;
}