#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,s,p=0;
    float x;
    printf("Введіть натуральне число n=");
    scanf("%d",&n);
    printf("Введіть дійсне число x=");
    scanf("%f",&x);
    for (i = 1; i <= n; i++)
    { 
        for (s = 0, j = i; j <= i; j++)
        
        s += x+j/i;
        p += s;
    }
    
    
    printf("Відповідь:%d\n", p);
    return 0;
}