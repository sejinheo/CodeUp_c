#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a = 1;
	for (int i=0; i < n;)
	{
		for (int j = 0,tmp = a; j < n; j++)
		{
			printf("%d ",tmp);
			
			if (j == n - 1)
			{
				a = tmp + n;
				i++;
			}
			tmp += 1;
		}
		if (i == n)
			return 0;
		printf("\n");
		for (int j = 0, tmp = a; j < n; j++)
		{
			printf("%d ", tmp);
		
			if (j == n - 1)
			{
				a = tmp+n;
				i++;
			}
			tmp -= 1;
		}
		
		printf("\n");
	}

	return 0;
}
