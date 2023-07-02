#include <stdio.h>
int main()
{
    int num;
    printf("????? ???????? : ");
    scanf("%d", &num);
    int thu, f_hund, o_hund, fifty, ten;
    thu = num/1000;
    f_hund = (num%1000)/500;
    ten = (num%50)/10;
    printf("1000?? %d??, 500?? %d??, 10?? %d?? ????.", thu, f_hund, ten);
    return 0;

/*  int num;
    printf("????? ????????.");
    scanf("%d", &num);
    int thu, f_hund, o_hund, fifty, ten;
    thu = num/1000;
    f_hund = (num%1000)/500;
    o_hund = (num%500)/100;
    fifty = (num%100)/50;
    ten = (num%50)/10;
    printf("1000?? %d??, 500?? %d??, 100??%d??, 50?? %d??, 10?? %d?? ????.", thu, f_hund, o_hund, fifty, ten);
    return 0;   */
}