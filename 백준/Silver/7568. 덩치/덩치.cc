#include <stdio.h>

typedef struct {
    int height;
    int weight;
} Person;

int main(void){
    int n;
    scanf("%d", &n);
    Person list[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &list[i].weight, &list[i].height);
    }

    for(int i = 0; i < n; i++){
        int rank = 1;
        for(int j = 0; j < n; j++){
            if(
                i != j &&
                list[i].weight < list[j].weight &&
                list[i].height < list[j].height
            ){
                rank++;
            }
        }
        printf("%d ", rank);
    }

    return 0;
}