#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int loop1,loop2;
    srand(time(NULL));
    for(loop1 = 0;loop1<20;loop1++)
    {
        for(loop2= 0;loop2<20;loop2++)
        {
            printf("%c ",rand()%26+65);
        }
        printf("\n");
    }


    return 0;
}
