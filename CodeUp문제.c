#include<stdio.h>
int main()
{
    int n;
    int a[1001];
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i = 1;i<=n;i++)
    printf("%d ",a[n-i]);
    
    return 0;
}