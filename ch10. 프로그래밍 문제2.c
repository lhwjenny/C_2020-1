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
      printf("문>> [%d번째] 학생의 3개 과목 점수를 입력하시오\n", row + 1);
      for (col = 0; col < SC; col++)
      {
        printf("국어점수:", det[pg]);
        scanf_s("%d", &score[row][0]);
        printf("영어점수:", det[pg]);
        scanf_s("%d", &score[row][1]);
        printf("수학점수:", det[pg]);
        scanf_s("%d", &score[row][2]);
      }
        printf("\n");
        total = score[row][0] + score[row][1] + score[row][2];
        avg = total / 3.0;
        printf("답>> 평균점수:[%.2f]\n\n", avg);
    }
        return 0;
}
