#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int  i,gradeA[10]={0},gradeB[10]={0},gradeC[10]={0};

    srand(time(0));

    printf("A:");
    printf_array(gradeA);
    printf("\nB:");
    printf_array(gradeB);
    printf("\nC:");
    printf_array(gradeC);

    printf("\n");

    return 0;
}
