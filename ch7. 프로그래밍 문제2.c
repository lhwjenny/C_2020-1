#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;
	
	re:
    printf("������ �Է� : ");
    scanf_s("%d", &su);
    
    if(su < 0)
    {
    	printf("���� ������ ������� �ʽ��ϴ�. \n");
    	printf("���� �������� �ٽ� �Է��ϼ���.\n");
    	goto re;
	}
	else
	{
		for(cnt = 1; cnt <= su; cnt ++)
		{ 
		    if((cnt % 2) != 0)
		        continue;
		    else
		    {
		    	hap += cnt;
			}
		}
		printf("1���� %d���� ¦���� ���� �հ�� %d\n", su, hap);
	}
	return 0;
}
