#include <stdio.h>

int main(void)
{
    
    /*
    전체 학생은 30명이고 그 중 28명은 제출 완료이기에
    제출 안한 사람은 무조건 2명이라 출력할 땐 제출 안한애를 모두 출력하면 돔
    
    IDEA: 0으로 초기화하고 제출한 애만 1로 하면 0인애는 과제 미제출이겠지?
    */
    int student[30] = {0};
    int temp;

    for(int i = 0; i < 28; i++){
        scanf("%d", &temp);
        student[temp - 1] = 1;
    }
    for(int i = 0; i < 30; i++){
        if(student[i] == 0){
            printf("%d\n", i+1); // 인덱스는 0 ~ 29, 출석 번호는 1 ~ 30
        }
    }


    return 0;
}