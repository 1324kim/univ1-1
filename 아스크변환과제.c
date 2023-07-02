#include <stdio.h>
int main(){
    char string[5];
    printf("문자를 입력하세용 ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &string[i]);
    }
    printf("의 아스키코드 값은 ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", string[i]);
    }
    printf("입니다");
    return 0;
}