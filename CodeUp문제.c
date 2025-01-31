#include <stdio.h>
int s=1;

int f(int n)
{
    if(n==0) return ;
    else
    {
        
        f(n-1);
        s=s*n;
        return s;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
}
