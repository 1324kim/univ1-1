#include <stdio.h>
int main(){
    char c1, c2, c3, c4, c5;
    printf("�ҹ��ڸ� �Է��ϼ��� ");
    c1 = getchar();
    c2 = getchar();
    c3 = getchar();
    c4 = getchar();
    c5 = getchar();
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    printf("�� �빮�ڴ� ");
    putchar(toupper(c1));
    putchar(toupper(c2));
    putchar(toupper(c3));
    putchar(toupper(c4));
    putchar(toupper(c5));
    printf("�Դϴ�.");
    return 0;
}