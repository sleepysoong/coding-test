#include <stdio.h>

int main(){
    
    int N, M;
    scanf("%d %d", &N, &M);
    
    int basket[N+1];
    
    for(int i = 1; i <= N; i++){
        basket[i] = i;
    }
    
    int L, R, temp;
    
    for(int j = 0; j < M; j++){
        scanf("%d %d", &L, &R);
        
        while(L < R){
            temp = basket[L];
            basket[L] = basket[R];
            basket[R] = temp;
            L++;
            R--;
        }
        
    }
    
    for (int k = 1; k <= N; k++){
        printf("%d ", basket[k]);
    }
    
    
    return 0;
    
}