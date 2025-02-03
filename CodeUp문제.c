#include <stdio.h>

int f(long long n)
{
    if (n == 0) 
        return 0;
    return (n % 10) + f(n / 10);
}

int main() 
{
    long long n;
    scanf("%lld", &n);
    printf("%d\n", f(n)); 
    return 0;
}
