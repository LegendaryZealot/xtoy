#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 10
#define Y 10

int GetRandom(int max);

int main(int argc, char const *argv[])
{
    for(int i=0;i<X;i++)
    {
        int tmp=GetRandom(Y-i);
        printf("the number of the rase:%d\n",tmp);
    }
    return 0;
}

int GetRandom(int max)
{
    srand((int)time(0));
    return rand()%max;
}
