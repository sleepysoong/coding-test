/*
시험 점수를 입력받아 90 ~ 100점은 A,
80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D,
나머지 점수는 F를 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>

char* grade(int score){
    if(score >= 90){
        return "A";
    }
    if(score >= 80){
        return "B";
    }
    if(score >= 70){
        return "C";
    }
    if(score >= 60){
        return "D";
    }
    return "F";
}
int main(){
    int score;
    scanf("%d", &score);
    printf("%s", grade(score));
    return 0;
}