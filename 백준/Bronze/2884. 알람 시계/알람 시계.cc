#include <stdio.h>

int main(){
    int H, M;
    scanf("%d %d", &H, &M);

    if(M < 45){
        if(H == 0){
            H = 23;
        }else{
            H --;
        }
        M += 15;
        /* 만약 45분이 아니라 30분으로 예를 들면 4시 20분인데
        30분을 빼면 3시 50분이고 50분은 60 + 20 - 30으로 구함.
        즉 M = 60 + M - 20 --> M = M + 60 - 30 --> m += 30 이런식
        */
    }else{
        M -= 45;
    }

    printf("%d %d\n", H, M);
    return 0;
}