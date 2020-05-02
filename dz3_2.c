#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char fname[80];
    int i,itr,n;
    for(i=48;i<58;i++)
    {
        FILE *fp;
	    sprintf(fname,"%c%s",i,".txt");

	    if ((fp = fopen(fname, "w")) == NULL)
		    {
		    printf("Не удалось открыть файл");
		    return 0;
		    }

        for (itr = 0; itr < 1000; itr++) 
            {
            n = rand() % 100 + 1;
            fprintf(fp,"%d\n", n);
            }

	    fclose(fp);
    }
	return 0;
}
