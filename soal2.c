#include <stdio.h>

int main(){
    int N;
    int arr[50];
    int x = 1;
    int level = 0;
    int prev = 1;

    scanf("%d", &N);

    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    // check banyak level
    while(N > 2*x){
        level++;
        x = 2*x;
    }
    level = level+1;

    printf("LEVEL 0: %d\n", arr[0]);
    

    for(int i=1; i<level; i++){
        printf("LEVEL %d: ", i);
        if(i % 2 != 0){
            for(int j = prev+(i*2)-1; j>0; j--){
                if(j != 0){
                printf("%d ", arr[j]);
                }
                else if(j == 0){
                printf("%d", arr[j]);
                }        
            }
        } else {
            for(int k = prev; k < prev+(i*2); k++){ 
                if(k != prev+(i*2)){
                printf("%d ", arr[k]);
                }
                else if(k == prev+(i*2)){
                printf("%d", arr[k]);
                }                    
            }
        }
        prev = prev+(i*2);
        printf("\n"); 
    }


    // printf("%d", level);

    // for(int i = 0; i<N; i++){
    //     printf("%d", arr[i]);
    // }

}
