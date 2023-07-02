#include <stdio.h>
char current = 'O';
char map[3][3];

void reset() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            map[i][j] = ' ';
        }
    }
}

void print_map(void){
    printf(" ");
for (int i = 1; i < 4; i++){
    printf(" %d", i);
}
    printf("\n");
for (int i = 0; i < 3; i++){ 
    char abc[3] = {'a', 'b', 'c'};
    printf("%c", abc[i]);
    for (int j = 0; j < 3; j++)
    {
        printf(" %c", map[i][j]);
    }
    printf("\n");
}
}

void play_go(){
    char row; 
    int col;
    printf("������ %c �� �����Դϴ�. �Է��ϼ��� ex) b3\n", current);
    scanf("%c%d", &row, &col);
    while (getchar() != '\n');
    row = row - 'a';
    col--;
    if (row < 0 || col < 0 || row >= 3 || col >= 3 || map[row][col] != ' '){
        printf("�߸��� �Է�. �ٽ� �Է������\n");
        play_go();
    }
    else {
        map[row][col] = current;
        current = (current=='O') ? 'X' : 'O';
    }
}

char winner_check(){
    for (int i = 0; i < 3; i++){ // ����
        if (map[i][0] == map[i][1] && map[i][1] == map[i][2] && map[i][0] != ' '){
        return map[i][0];
    }
    else if (map[0][i] == map[1][i] && map[1][i] == map[2][i] && map[0][i] != ' '){ // ����
        return map[0][i];
    }
    }
    if ((map[0][0] == map[1][1] && map[1][1] == map[2][2]) || (map[0][2] == map[1][1] && map[1][1] == map[2][0])){ // �밢��
        return map[1][1];
    }  
    return ' ';
}

int main(){
    int turn = 1;
    char winner = ' ';
    reset();
    while (turn < 10 && winner == ' '){
        print_map();
        play_go();
        winner = winner_check();
        turn++;
    }
    print_map();
    if (winner == 'O'){
        printf("%c�� �̰���", winner);
    }
    else if (winner == 'X'){
        printf("%c�� �̰���", winner);
    }
    else printf("���º�!");
    return 0;
}