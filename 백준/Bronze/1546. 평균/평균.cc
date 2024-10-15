#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int scores[N];
    int maxScore = 0; // 100보다 작거나 같은 음이 아닌 정수라고 했으니 maxScore를 0으로 시작하는게 맞음
    double sum = 0.0;
    
    for(int i = 0; i < N; i++){
        scanf("%d", &scores[i]);
        if(scores[i] > maxScore){
            maxScore = scores[i];
        }
    }

    for(int i = 0; i < N; i++){
        sum += (double)scores[i] / maxScore * 100; // 조정된 점수 계산
    }

    printf("%.2lf\n", sum / N); // 평균을 소수점 둘째 자리까지 출력
    return 0;
}