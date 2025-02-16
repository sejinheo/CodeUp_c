#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = 0;
    for(int i = a;i<=b;i++)
    {
        if(i%3 == 0)
         sum += i;
        else if(i%4 == 0)
         sum -= i;
        
       if(i % 4 == 0 && i % 3 == 0)
       sum -=i;
       
       //printf("%d\n",sum);
        
    }
    printf("%d",sum);
    return 0;
}