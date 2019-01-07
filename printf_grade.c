#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printf_array(int A[]){
    int a;
    int total;
    for (a=0;a<10;a++){
    A[a]=rand()%100+1;
    printf("%4d",A[a]);
    }
    printf("\n");
    printf("a @%p\n",&a);
    printf("total @%p\n",&total);
}
