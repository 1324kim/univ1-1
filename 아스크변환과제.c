#include <stdio.h>
int main(){
    char string[5];
    printf("���ڸ� �Է��ϼ��� ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &string[i]);
    }
    printf("�� �ƽ�Ű�ڵ� ���� ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", string[i]);
    }
    printf("�Դϴ�");
    return 0;
}