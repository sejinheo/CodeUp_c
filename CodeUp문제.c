
#include <stdio.h>
 
int main() 
{
    int s;
    scanf("%d", &s);
    do{
        printf("%d", s%10);
        s /= 10;
        if(s==0)
            break;
    }while(1);
    
    return 0;
}
