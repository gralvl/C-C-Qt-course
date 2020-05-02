#include <stdio.h>

int list_sum(int* N,int i)  // рекурсивная функция, первый аргумент - массив, второй - индекс элемента
{
	i--;
	if (i==0) return *N;
	return *(N+i)+list_sum(N,i);
}

int main(void) {
            
    int digits[3];
    printf("\nEnter your birthday. Please type one element on one line[d/m/y]:\n");
    for(int i=0;i<3;i++) scanf("%d",&digits[i]);
    printf("\nSum of the elements equals to:\n");
    printf("%d\n",list_sum(digits, 3));
    return 0;
}
