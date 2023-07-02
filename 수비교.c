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

    printf("세 개의 숫자를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    comparison(&num1, &num2, &num3);

    printf("작은 순서로 정렬된 숫자: %d %d %d\n", num1, num2, num3);

    return 0;
}