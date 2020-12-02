#include <stdio.h>
#include <math.h>

int main()
{
float y=0,x=-6,b = 3,dx = 0.75;
printf("X\t\t\t\t\tY\n");
while (x<=b)
{
y=pow(x,4)-12*x+exp(x);
printf(" %f\t%9.2lf\n", x, y);
x+=dx;
}
return 0;
}