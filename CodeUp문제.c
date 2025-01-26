#include <stdio.h>
typedef struct
{
    char name[10];
    int rank;
    int num;
}Student;
int main()
{
    int max = 0;
    Student student[101];
    Student temp;
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", student[i].name);
        scanf("%d", &student[i].rank);
        student[i].num = i;
    }

    for (int i = 0; i < n; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (student[j].rank > student[max].rank)
            {
                temp = student[j];
                student[j] = student[max];
                student[max] = temp;
            }
            if (student[j].rank == student[max].rank)
            {
                if (student[j].num < student[max].num)
                {
                    temp = student[j];
                    student[j] = student[max];
                    student[max] = temp;
                }

            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%s\n", student[i].name);
        
    }
}
