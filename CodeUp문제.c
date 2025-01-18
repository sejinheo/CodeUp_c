#include<stdio.h>
#define MAX 10
int main()
{
    int k, arr[MAX];
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",arr[k-1]);
}