#define SR 2
#define SC 1
#define DR 3
#define DC 9

int main(void)
{
   int row, col, total, pg = 0;
   double avg;
   char det[DR][DC];
   int score[SR][SC];

   for (row = 0; row < SR; row++)
   {
      printf("��>> [%d��°] �л��� 3�� ���� ������ �Է��Ͻÿ�\n", row + 1);
      for (col = 0; col < SC; col++)
      {
        printf("��������:", det[pg]);
        scanf_s("%d", &score[row][0]);
        printf("��������:", det[pg]);
        scanf_s("%d", &score[row][1]);
        printf("��������:", det[pg]);
        scanf_s("%d", &score[row][2]);
      }
        printf("\n");
        total = score[row][0] + score[row][1] + score[row][2];
        avg = total / 3.0;
        printf("��>> �������:[%.2f]\n\n", avg);
    }
        return 0;
}
