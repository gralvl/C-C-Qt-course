//char overflow
#include <stdio.h>

int main()
{
	char c = 127;//char maximum value
	double digit = 1.7E+308;//double maximum value

	printf("\nchar before - %c(%d)",c,c);
	c++;
	printf("\noverflowed char - %c(%d) \n",c,c);
	
	printf("\ndouble - %lf\n",digit);
	digit*=digit;
	printf("\noverflowed double - %lf\n",digit);//double looses its precision or turns into infinity

	return  0;
}

