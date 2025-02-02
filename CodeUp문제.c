#include<stdio.h>
int main()
{
    int map[12][12];
    int obstacle = 0;
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    for (int j = 1; j<=10; j++)
    {
        if (map[11][j] == 0)
            continue;

        for (int i = 10; i >= 1; i--)
        {
            if (map[i][j] != 0)
            {
                obstacle = map[i][j];
                break;
            }
        }
        if (obstacle == 0)
            printf("%d safe\n", j);
        else if (obstacle > 0)
            printf("%d crash\n", j);
        else if (obstacle < 0)
            printf("%d fall\n", j);
        obstacle = 0;
    }

}