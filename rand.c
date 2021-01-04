#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num;
    int min, max;
    int i;
    
    srand( time(NULL) );

    min = 50, max = 56;
    printf("Gruppo a:");
    for (i = 0; i < 5; i++){
        num = min + rand() % (max - min);
        printf("%4d", num);
    }

    min = 1, max = 6;
    printf("\nGruppo b:");
    for (i = 0; i < 5; i++){
        num = (min + rand() % (max - min)) * 2;
        printf("%4d", num);
    }

    min = 1, max = 6;
    printf("\nGruppo c:");
    for (i = 0; i < 5; i++){
        num = min + ((1 + rand() % (max - min)) * 2);
        printf("%4d", num);
    }

    min = 1, max = 6;
    printf("\nGruppo d:");
    for (i = 0; i < 5; i++){
        num = min + 2 * 1 + (1 + rand() % (max - min)) * 2;
        printf("%4d", num);
    }

    putchar('\n');

    return 0;
}