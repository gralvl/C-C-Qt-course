#include <stdio.h>
#include "keyboard_catch.h"
 
int main(void) {

	char * add = "первая буква цифры";

	do
	{
		printf("\nPlease press any single digit: ");
		int num = getche();
		
		switch(num)
		{
		 case 48:
				printf("\nН - %s",add);
				break;
		 case 49:
				printf("\nО - %s",add);
				break;
		 case 50:
				printf("\nД - %s",add);
				break;
		 case 51:
				printf("\nТ - %s",add);
				break;
		 case 52:
				printf("\nЧ - %s",add);
				break;
		 case 53:
				printf("\nП - %s",add);
				break;
		 case 54:
				printf("\nШ - %s",add);
				break;
		 case 55:
				printf("\nС - %s",add);
				break;
		 case 56:
				printf("\nВ - %s",add);
				break;
		 case 57:
				printf("\nД - %s",add);
				break;
		 default:
				printf("\nOoops! Something went wrong!");
				break;
		}	 
		printf("\nWould you like to continue? Press[Enter]/[any other keyboard button] ");
	}while(getch()=='\n');

	return 0;
}
