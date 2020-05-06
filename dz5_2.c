#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXBUF 100000
#define ONEITRREADSIZE 100

int main() {
    
    int itr=0;
    char buf[MAXBUF];
    FILE *fp;

    if ((fp = fopen("voyna-i-mir-tom-1.txt", "r")) == NULL)
        {
        printf("Не удалось открыть файл");
        exit(1);
        }
    while(!(feof(fp) || ferror(fp)) || itr>(int)(MAXBUF/ONEITRREADSIZE))
    {
    if(fread(buf+itr*ONEITRREADSIZE, sizeof(char), ONEITRREADSIZE, fp)!=ONEITRREADSIZE) break;
    itr++;
    }
    printf("\nThe length of the content in buffer (bytes): %ld\n",strlen(buf));
    fclose(fp);
    return 0;
}
