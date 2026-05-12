/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 - soal 2
 *   Hari dan Tanggal    : Selasa, 12 Mei 2026
 *   Nama (NIM)          : Kenneth Harrison Siswanto (13224032)
 *   Nama File           : Modul5.c
 *   Deskripsi           : Membuat output zigzag dari sebuah tree
 * 
 */

#include <stdio.h>

int main(){
    int N;
    int arr[50];
    int x = 1;
    int level = 0;
    int prev = 1;
    int bef;

    scanf("%d", &N);

    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    // check banyak level
    while(N >= 2*x){
        level++;
        bef = 2*x;
        x = 2*x;
    }
    level = level + 1;
    // if(N > bef && N < ){
    //     level = level+1;
    // }

    // if(N > bef && N < 2*x){
    //     level = level-1;
    // }

    // printf("%d", level);

    printf("LEVEL 0: %d\n", arr[0]);
    

    for(int i=1; i<level; i++){
        printf("LEVEL %d: ", i);
        if(i % 2 != 0){
            if(N < prev+(i*2)-1){
            for(int j = N-1; j>0; j--){
                if(j != 1){
                printf("%d ", arr[j]);
                }
                else if(j == 1){
                printf("%d", arr[j]);
                }        
            }
            } else {
                for(int j = prev+(i*2)-1; j>0; j--){
                if(j != 1){
                printf("%d ", arr[j]);
                }
                else if(j == 1){
                printf("%d", arr[j]);
                }        
            }
            } 
        } else {
            for(int k = prev; k < prev+(i*2) && k < N; k++){ 
                if(k != prev+(i*2)-1 || k != N-1){
                printf("%d ", arr[k]);
                }
                else if(k == prev+(i*2)-1 || k != N-1){
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
