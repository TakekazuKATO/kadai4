#include <stdio.h>

int main() {
    int inputs[20]={2, 5, 10, 14, 3, 9, 18, 13, 12, 15, 19, 11, 1, 7, 0, 17, 6, 4, 16, 8};


    /*

        ここにinputsの配列を小さい順に並べ替えるプログラムを書く
    */

    //結果表示
    for(int i=0;i<20;i++){
        printf("%d ",inputs[i]);
    }
    printf("\n");
    return 0;
}
