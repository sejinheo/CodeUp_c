#include <stdio.h>

int PalindromeCheck(int num) 
{
    int original = num, reversed = 0, digit;
    while (num > 0) 
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int maxPalindrome = 0;
    for (int i = a; i <= b; i++) 
    {
        for (int j = i; j <= b; j++) 
        { 
            int save = i * j;
            if (PalindromeCheck(save) && save > maxPalindrome) 
            {
                maxPalindrome = save;
            }
        }
    }
    
    printf("%d\n", maxPalindrome);
    return 0;
}