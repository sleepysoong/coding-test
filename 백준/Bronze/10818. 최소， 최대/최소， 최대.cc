#include <stdio.h>

int main(void){
    
    int c;
    scanf("%d", &c);
    
    int arr[c];
    
    for(int i=0; i<c; i++){
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for(int i=0; i<c; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    printf("%d %d", min, max);
    return 0;
    
}