#include <stdio.h>

int main(void)
{
	int ph, cnt = 1;
	char op;
	
	do {
		printf("���ĺ� �Է� : ", cnt);
		
		scanf_s("%c", &op, sizeof(op));
		
		if(op == 'Q' || op == 'q')
		{
			printf("�� %dȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.\n", cnt);
			printf("ã�� ���ĺ��� ��� ���� ���� ���� 'Q'�Դϴ�.\n");
			break;
		}
		else
		{
			printf("ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			getchar();
			cnt++;
		}
	}while(1);
	return 0;
}
