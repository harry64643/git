#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j ;
    int num,times ;

    srand(time(NULL));

    for(j=0;j<100;j++)
    {
        num=rand()%10+1;
        if(num==1)
        {
            times++;
        }
    }

    printf("%d\n",times);

    for(i=0;i<10;i++)
    {
        printf("%d",i);
    }

    printf("\n today is mondy ");

    printf("\nHello world!\n");
    return 0;
}
