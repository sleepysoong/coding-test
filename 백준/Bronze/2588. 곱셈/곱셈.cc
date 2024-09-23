#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int third_of_b = b % 10;
    int second_of_b = ((int)(b / 10)) % 10;
    int first_of_b = (int)(b / 100);

    int first_line = a * third_of_b;
    int second_line = a * second_of_b;
    int third_line = a * first_of_b;
    int fourth_line = first_line + second_line*10 + third_line*100;
    
    printf("%d\n%d\n%d\n%d", first_line, second_line, third_line, fourth_line);
}