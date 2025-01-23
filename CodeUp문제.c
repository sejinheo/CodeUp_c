#include<stdio.h>
int main()
{
    int n[6];
    for(int i=0;i<=5;i++)
    scanf("%d",&n[i]);
    int a,b,c;
    a = n[0] * n[1];
    b = n[2] * n[3];
    c = n[4] * n[5];
    if(b<=a && c<=a)
    printf("%d",a);
    else if(a<=b&&c<=b)
    printf("%d",b);
    else 
    printf("%d",c);
}