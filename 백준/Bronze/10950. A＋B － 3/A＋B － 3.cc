//
// Created by SleepySoong on 24. 10. 8.
//

#include <stdio.h>

int main(void){
    int count;
    int a, b;
    scanf("%d", &count);
    for(count; count >= 1; count--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
