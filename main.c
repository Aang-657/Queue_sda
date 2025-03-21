#include "list.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int x;
    int nomorantrian = 0;
    queue teller1;
    queue teller2;
    bool isrunning = true;

    initList(&teller1);
    initList(&teller2);

    void (*tab[3])(queue *, int ) = {prosesantrian, cetakantrian};

    while (isrunning){
        printmenu(); 
        printf("masukkan input: ");
        scanf("%d", &x);

        if (x == 4){
            isrunning = exitsystem(&teller1, &teller2);
        } 
        else if (x==2 ||  x==3){
            int teller;
            printf("pilih teller (1 atau 2): ");
            scanf("%d", &teller);
            if (teller == 1){
                printf("teller1: ");
                tab[x-2](&teller1, nomorantrian);
            } else if (teller == 2) {
                printf("teller2: ");
                tab[x-2](&teller2, nomorantrian);
            } else {
                printf("input tidak valid ...\n");
            }
        }
        else if (x == 1){
            nomorantrian ++;
            int len1 = length(&teller1);
            int len2 = length(&teller2);

            if (len1<=len2){
                printf("antrian masuk ke teller 1: \n");
                printf("teller1: ");
                ambilantrian(&teller1, nomorantrian);
            } else{
                printf("antrian masuk ke teller 2: \n");
                printf("teller2: ");
                ambilantrian(&teller2, nomorantrian);
            }
        }
        else {
            printf("input tidak valid\n");
        }
    }
    return 0;
}

