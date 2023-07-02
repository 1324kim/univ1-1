#include <stdio.h>
int main(){
    while(1){
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == 0 || y == 0)
    {
        return 0;
    }
    else    printf("사각형의 넓이는 %d이고 삼각형의 넓이는 %d입니다", square(x, y), triangle(x, y));
}
}

int square(int a, int b){
    return (a * b);
}

int triangle(int a, int b){
    return (a * b / 2);
}