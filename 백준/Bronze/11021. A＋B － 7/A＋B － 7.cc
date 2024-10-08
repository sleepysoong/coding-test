#include <stdio.h>

int main(void) {
    int c, a, b;
    scanf("%d", &c);
    for (int i = 1; i <= c; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}