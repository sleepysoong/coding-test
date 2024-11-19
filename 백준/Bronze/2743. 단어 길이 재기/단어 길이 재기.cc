#include <stdio.h>

int main(void) {
    char s[101];
    scanf("%s", &s);
    int int_a = 'a';
    int int_A = 'A';
    int int_z = 'z';
    int int_Z = 'Z';

    int count = 0;
    for (int i = 0; i < 101; i++) {
        if ((int_a <= s[i] && s[i] <= int_z) || (int_A <= s[i] && s[i] <= int_Z)) {
            count++;
        }else{
            break;
        }
    }

    printf("%d", count);
    return 0;
}