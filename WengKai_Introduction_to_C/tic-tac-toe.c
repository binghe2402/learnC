#include <stdio.h>
void draw_board(char board[3][3]);   //棋盘局面绘制
char check_win(char board[3][3]);    //胜负检查
int main()
{
    char result = 0;
    int i, j;
    char board[3][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            board[i][j] = ' ';
    draw_board(board);

    char player[2] = {'O', 'X'};
    int turn = 0;                   //记录回合数

    while (!result && turn <= 9)
    {
        printf("player %c's turn\n", player[turn % 2]);
        scanf("%d,%d", &i, &j);

        board[i][j] = player[turn % 2];
        draw_board(board);

        result = check_win(board);
        turn++;
    }
    if (turn <= 9)
        printf("After %d turns,\nThe Winner is player %c\n", turn, result);
    else
        printf("Game ends with a Draw\n");
}
void draw_board(char board[3][3])
{
    printf("  0 1 2\n");
    printf(" ------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d|", i);
        for (int j = 0; j < 3; j++)
            printf("%c|", board[i][j]);
        printf("\n");
        printf(" ------\n");
    }
}
char check_win(char board[3][3])
{
    int win = 3;

    for (int i = 0; i < 3; i++)
    {
        int r_cnt_o = 0, r_cnt_x = 0;     //行记录
        int c_cnt_o = 0, c_cnt_x = 0;     //列记录
        int x1_cnt_o = 0, x1_cnt_x = 0;   //斜记录(/)
        int x2_cnt_o = 0, x2_cnt_x = 0;   //反斜记录(\)

        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'O') //行计数
                r_cnt_o++;
            if (board[i][j] == 'X')
                r_cnt_x++;

            if (board[j][i] == 'O') //交换(i,j)转置以进行列计数
                c_cnt_o++;
            if (board[j][i] == 'X')
                c_cnt_x++;

            if (!i)
            {
                if (board[j][j] == 'O') //斜计数
                    x1_cnt_o++;
                if (board[j][j] == 'X')
                    x1_cnt_x++;

                if (board[j][2 - j] == 'O') //反斜计数
                    x2_cnt_o++;
                if (board[j][2 - j] == 'X')
                    x2_cnt_x++;
            }
        }
        if (r_cnt_o == win || c_cnt_o == win || x1_cnt_o == win || x2_cnt_o == win)
            return 'O';
        if (r_cnt_x == win || c_cnt_x == win || x1_cnt_x == win || x2_cnt_x == win)
            return 'X';
    }
    return 0;
}