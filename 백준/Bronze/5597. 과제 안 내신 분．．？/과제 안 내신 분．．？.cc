#include <stdio.h>

int main(void){
    int students[31] = {0};
    for(int i = 0; i < 28; i++){
        int j;
        scanf("%d", &j);
        students[j] = 1;
    }
    for(int k = 1; k < 31; k++){
        if(students[k] == 0){
            printf("%d\n", k);
        }
    }
    return 0;
}