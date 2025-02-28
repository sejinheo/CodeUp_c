#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int button[3] = {300,60,10};
    int count[3] = { 0 };
    if (t % 10 !=0)
    {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        if (t >= button[i])
        {
            count[i] = t / button[i];
            t = t % button[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {

        printf("%d", count[i]);
        if (i + 1 != 3)
            printf(" ");
    }
}