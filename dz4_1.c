#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char randout[1000];
    int i,itr,n;

    srand(time(NULL));//задание старта по времени для псевдослучайной последовательности
    for(i = 0; i < 50; i++)
    {
        for (itr = 0; itr < 20; itr++) 
            {
            n = rand()%(126-64+1)+64;//случайный выбор из диапазона кракозябр по UTF-8

            printf("%c ", n);
            }
        printf("\n");
    }
    return 0;
}
