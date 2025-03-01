#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int num = 1;
    scanf("%d", &n);

    for (int i = 1;i <= n; i++)
    {
        for (int j = 1; j<= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
                sum += num;
            num++;
        }
    }
    printf("%d", sum);
}