#include <stdio.h>

int main(void){
    int sum, count;
    int temp = 0;
    scanf("%d\n%d", &sum, &count);
    for(count; count >= 1; count--) {
        int stuff, price;
        scanf("%d %d", &stuff, &price);
        temp += stuff * price;
    }
    printf(sum == temp ? "Yes" : "No");
    return 0;
}
