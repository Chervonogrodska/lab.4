#include <stdio.h>
#include <math.h>

int main()

{
    int i=10,s=1;
    while(i<=60)
{
    if (i % 3==0)
    s *= i;
    i++;
} 
printf("s=%d",s);
}