//
// Created by SleepySoong on 24. 10. 8.
//

#include <stdio.h>

int main(void){
    int n;
    int temp = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        temp += i;
    }
    printf("%d", temp);
    return 0;
}
