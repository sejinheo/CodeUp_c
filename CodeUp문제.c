#include<stdio.h>
#include<string.h>
int main()
{
    char speaking[100];
    char reverse[100];
    
    gets(speaking);
    int len = strlen(speaking);
    
    for(int i = 0; i<len;i++)
    {
        reverse[i] = speaking[len-i-1];
        
        if(i==len-1)
        {
            reverse[len] = 0;
        }
    }
    printf("%s",&reverse);
    return 0;
}