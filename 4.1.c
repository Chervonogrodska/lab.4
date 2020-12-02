#include <stdio.h>
#include <math.h>

int main()

{
    int x,y,z,er;
    float a;
do
{
  er=0;
        printf("число x = ");
        scanf("%d",&x);
        printf("число y = ");
        scanf("%d",&y);
        printf("число z = ");
        scanf("%d",&z);
        a=sqrt(pow(x,2)*y-14*z);
        if(pow(x,2)*y-14*z==0)
        {
          printf("\nКорінь з нуля\n");
          er=1;
        }
        else if(pow(x,2)*y-14*z<0)
        {
          printf("\nКорінь з від'ємного числа\n");
          er=1;
        }    
}
while(er==1);
          printf("%f\n",a);
        }