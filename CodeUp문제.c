#include<stdio.h>
int main()
{
	int map_x,map_y;
	int ch_x, ch_y;
	int num1 = 1;
	int num2 = 1;
	int time;
	scanf("%d", &map_x);
	scanf("%d", &map_y);
	scanf("%d", &ch_x);
	scanf("%d", &ch_y);
	scanf("%d", &time);
	for (int i = 0; i < time; i++)
	{
		if (ch_x == map_x)
			num1 = -1;
		if (ch_x == 0)
			num1 = 1;
		if (ch_y == map_y)
			num2 = -1;
		if (ch_y == 0)
			num2 = 1;
		ch_x += num1;
		ch_y += num2;
	}
	printf("%d %d", ch_x, ch_y);
}