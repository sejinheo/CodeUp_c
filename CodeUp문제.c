#include<stdio.h>
#define MAX 101
int main()
{
    char str[MAX];
    scanf("%s",str);
    printf("%c",str[0]);
    char check = ',';
    for(int i = 1;i< MAX;i++)
    {
        if (str[i - 1] == check)
        printf("%c",str[i]);
    }
    return 0;
}