#include <stdio.h>
#include <math.h>

int main()

{
    int i=10,s=1;
    do
{
    if (i % 3==0)
    s *= i;
    i++;
}while(i<=60); 
printf("s=%d",s);
}