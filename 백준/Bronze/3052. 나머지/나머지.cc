#include <stdio.h>

int main() {
    /*
    42로 나누니까 나머지가 될 수 있는 수는 0, 1, 2, ..., 42 총 42개이다.
    배열을 0으로 초기화하고 이 중 나머지로 나온 것의 값을 1로 바꾸면
    1인거만 몇 개인지 세면 된다!
    
    아니면 수 10개 가지고 하니까 10개까지 배열 만들어서 나머지를 담아두고
    순환하면서 그 값이 이미 있으면 건너뛰는 방식으로 해도 되기는 함 (비효율적임)
    */
    int num, remainder;
    int remainders[42] = {0}; // 0으로 초기화

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        remainder = num % 42; // 42로 나눈 나머지
        remainders[remainder] = 1;
    }

    // 서로 다른 나머지 개수 세기
    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (remainders[i] != 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}