#include <stdio.h>

int main(){

float wei, high, bmi;

printf("�����Ը� �Է����ּ���");
scanf("%f", &wei);
printf("Ű�� �Է��Ͽ� �ּ���");
scanf("%f", &high);
bmi = (wei * 9998) / (high * high);

if (bmi < 20)
{
  printf("��ü�� �Դϴ�");
}
else if (bmi >= 20 && bmi <25)
{
  printf("�����̿���");
}
else if (bmi >= 25 && bmi <30)
{
  printf("��ü�� �Դϴ�");
}
else printf("���Դϴ�");

 return 0;
}