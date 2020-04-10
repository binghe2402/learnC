#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int mat[n][n];
    int row[n][n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mat[i][0]);
        int temp = mat[i][0];

        row[i][0] = 0;
        int row_index = 1; //每行的第几个(也就是列号)

        for (int j = 1; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > temp)
            {
                row[i][0] = j;
                row_index = 1;
                temp = mat[i][j];
            }
            else if (mat[i][j] == temp)
            {
                row[i][row_index] = j;
                row_index++;
            }
        }
        row[i][row_index] = -1;
    }
    char result[5];
    
    strcpy(result,"NO");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; row[i][j] != -1; j++)
        {
            int col = row[i][j];
            int k=0;
            for (k = 0; k < n; k++)
            {
                if (mat[k][col] < mat[i][col])
                    break;
            }
            if (k == n)
            {
                sprintf(result, "%d %d", i, col);
                goto out;
            }
        }
    }
    out:
        puts(result);
}