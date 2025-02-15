#include<stdio.h>
int arr[7][7];
int func(int i, int j)
{
    int color = arr[i][j];
    if(color == 0) 
    return 0;
    arr[i][j] = 0;

    int cnt = 1;
    if(color == arr[i-1][j] && i >0) cnt += func(i-1,j);
    if(color == arr[i+1][j] && i <6) cnt += func(i+1,j);
    if(color == arr[i][j-1] && j >0) cnt += func(i,j-1);
    if(color == arr[i][j+1] && j <6) cnt += func(i,j+1);
    return cnt;
}
int main()
{
  for(int i = 0;i<7;i++)
  {
  for(int j = 0; j< 7;j++)
  {
    scanf("%d",&arr[i][j]);
  }
  }
  int cnt = 0;
  for(int i = 0;i<7;i++)
  {
    for(int j = 0;j<7;j++)
    {
        if(func(i,j) >= 3)
            cnt++;
    }
  }
  printf("%d",cnt);
    return 0;
}