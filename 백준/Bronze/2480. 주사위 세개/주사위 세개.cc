#include <stdio.h>

int main(void){
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c && a == c){
        printf("%d", 10000 + a * 1000);
        return 0;
    }
    
    if(a == b || b == c){
        printf("%d", 1000+b*100);
        return 0;
    }
    
    if(a == c){
        printf("%d", 1000+a*100);
        return 0;
    }
    
    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    printf("%d", max*100);
    return 0;
}