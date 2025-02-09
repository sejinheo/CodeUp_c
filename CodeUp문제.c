#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i+1);
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] < arr[j])
                    printf("< ");
                else if (arr[i] > arr[j])
                    printf("> ");
                else if (arr[i] == arr[j])
                    printf("= ");
           }
        }
        printf("\n");
    }
}