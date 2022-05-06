#include <stdio.h>

int main(void)
{
	int ph, cnt = 1;
	char op;
	
	do {
		printf("알파벳 입력 : ", cnt);
		
		scanf_s("%c", &op, sizeof(op));
		
		if(op == 'Q' || op == 'q')
		{
			printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", cnt);
			printf("찾은 알파벳은 대소 문자 구별 없이 'Q'입니다.\n");
			break;
		}
		else
		{
			printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n\n");
			getchar();
			cnt++;
		}
	}while(1);
	return 0;
}
