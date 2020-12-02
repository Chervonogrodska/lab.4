#include <stdio.h>
#include <math.h>

int main()

{
    int i=10,s;
    for(s=1; i<=60;i++)
{
    if (i%3==0)
    s *= i;
} 
printf("s=%d",s);
}