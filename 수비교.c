#include <stdio.h>

void comparison(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int num1, num2, num3;

    printf("�� ���� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    comparison(&num1, &num2, &num3);

    printf("���� ������ ���ĵ� ����: %d %d %d\n", num1, num2, num3);

    return 0;
}