#include <stdio.h>

int SuperSum(int k, int n) 
{
    if (k == 0) {
        return n;
    } else {
        int sum = 0;
        for (int i = 1; i <= n; i++) 
        {
            sum += SuperSum(k - 1, i);
        }
        return sum;
    }
}

int main() {
    int k, n;
    while (scanf("%d %d", &k, &n) != EOF)
    {
        printf("%d\n", SuperSum(k, n));
    }
    return 0;
}
