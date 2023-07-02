#include <stdio.h>
int main()
{
    int count , time;

    printf("???©£??? ???????? ");
    scanf("%d", &time);
    count = time / 15;

    if(count <= 2){
        printf("??????? 1200??????");
    } 
    
    else if (count > 2 && count < 96)
    {
        printf("%d", 1200 + 600 * (count - 2));
    }
    else if (count >= 96)
    {
        printf("%d", 24000 + (count - 96) * 600 );
    }
return 0;
}