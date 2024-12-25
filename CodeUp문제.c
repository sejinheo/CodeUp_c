#include <stdio.h>

int f(int n) 
{
    if (n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    int result = f(n);
    printf("%d\n", result);
    
    return 0;
}