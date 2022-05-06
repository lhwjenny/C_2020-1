#include <stdio.h>
int foun(int);
int a = 100;
int main(void)
{
	int result;
	result = foun(a) + 50;
	printf(">> result = %d \n", result);
	return 0;
}
int foun(int a)
{
	a = 200;
	return a;
}
