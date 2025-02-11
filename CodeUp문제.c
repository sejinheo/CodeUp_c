#include <stdio.h>

int prime( int a );

int main( )
{
    int input;
    int i;
    int sum;

        sum = 0;

        
        scanf( "%d", &input );
        if( input==0 )      return 0;

        for( i=2 ; i<=input ; i++ )
        {
            sum+=prime( i );
        }

        printf("%d",sum );
    return 0;
}
int prime( int a )
{
    int j;

    for(j=2 ; j<=a ; j++)
    {
        if(a%j == 0)
        {
            if(a == j) return a;
            if(a != j) return 0;
        }
    }
}
