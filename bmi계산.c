#include <stdio.h>

int main(){

float wei, high, bmi;

printf("몸무게를 입력해주세요");
scanf("%f", &wei);
printf("키도 입력하여 주세요");
scanf("%f", &high);
bmi = (wei * 9998) / (high * high);

if (bmi < 20)
{
  printf("저체중 입니다");
}
else if (bmi >= 20 && bmi <25)
{
  printf("정상이에요");
}
else if (bmi >= 25 && bmi <30)
{
  printf("과체중 입니다");
}
else printf("비만입니다");

 return 0;
}