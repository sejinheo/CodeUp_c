#include<stdio.h>

int f(int n) 
{
	int num = 0;

	while (n != 0) 
	{ 
		if (n % 10 == 1)
		num++;
		n /= 10;
	}
	return num; 
}

int main()
{
    int a,b;
    int sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i = a; i <= b; i++) 
    {
		sum += f(i);
	}
	printf("%d", sum);

    return 0;
}