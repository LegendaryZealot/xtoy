#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 10
#define Y 100

int GetRandom(int max);

int main(int argc, char const *argv[])
{
    int result[X];
    int cacahe[X];
    for(int i=0;i<X;i++)
    {
        int tmp=GetRandom(Y-i);
        for(int j=0;j<i;j++)
        {
            if(tmp>=cacahe[j])
            {
                tmp++;
            }
        }
        cacahe[i]=tmp;
        result[i]=tmp;
    }
    for(int i=0;i<X;i++)
    {
        printf("%d\t",result[i]);
    }
    printf("\n");
    return 0;
}

int GetRandom(int max)
{
    srand((int)time(0));
    return rand()%max;
}
