#include <stdio.h>
float circle(int r)
{
    float sum;
    sum = 3.14*r*r;
    return sum;
}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}