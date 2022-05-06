#include <stdio.h>

int Add(int num1, int num2);
	Gob(int *pa, int *pb);

int main(void)
{
	int a = 10, b = 20, gob = 0;

	
	printf("매개변수 2개의 덧셈 연산\n");
	printf("[main ()함수 영역]\n\n");
	printf("전달> %d과 %d를 Add()함수에 전달\n", a, b);
	
	gob = Add(a, b);
	
	printf("[main()함수 영역]\n\n");
	printf("결과> %d와 %d의 덧셈 결과 : %d\n", a, b, gob);
	return 0;
}

int Add(int num1, int num2)
{
	int result;
	
	printf("[Add()함수 영역]\n\n");
	printf("수행> 덧셈 연사 ㄴ결과를 main() 함수에 반환\n" );
	
	result = num1 * num2;
	return result;
	
}
