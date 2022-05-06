#include <stdio.h>
void foun(void);
int a;
int main(void)
{
	for(a = 0; a < 10; a+=3)
	{
		foun();
		printf("\n");
	}
	return 0;
}
void foun(void)
{
	for(a = 0; a < 20; a+=3)
	printf("¢½");
	printf("\n"); 
}
