#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *CHORUS[6] = {"Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you"};

int main(void) {
	
	char tmp[80];
	char * end;
	int itr = 0;
	int couplet_num=0;

	FILE *fp;
	char name[] = "dz2_couplet.txt";
	if ((fp = fopen(name, "r")) == NULL)
		{
		printf("Не удалось открыть файл");
		return 0;
		}

	printf("\nWelcome to a catchy song karaoke! Sing like no one is around!\n");

	do
	{
			   while(itr<6)
				{	
					end = fgets(tmp,80,fp);
					sleep(2);
					//printf("\n%s\n",end);
					if(tmp[0]==10)//код символа перевода строки "\r\n" в C++
						{ 
						  for(itr=0;itr<6;itr++)
							{
							printf("%s\n",CHORUS[itr]);
							sleep(2);
							}						
						}
					else printf("%s",tmp);
				}
				itr = 0;
				couplet_num++;

	}while(couplet_num<2);
	
	fclose(fp);

	return 0;
}
