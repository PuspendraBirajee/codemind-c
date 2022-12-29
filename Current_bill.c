#include<stdio.h>
int main()
{
    float u,a,s,ta;
    scanf("%f",&u);
    if(u<=199)
    {
      a=u*1.20;
      printf("%.2f",a+100);
    }
    else if(u>=200&&u<400)
    {
        a=u*1.50;
        if(a<=400)
        {
            s=15/100*a;
            ta=s+a;
            printf("%.2f",ta+100);
        }
        else
        {
            printf("%.2f",a+100);
        }
    }
    else if(u>=400&&u<600)
    {
        a=u*1.80;
        s=15/100*a;
        ta=s+a;
        printf("%.2f",ta);
    }
    else
    {
        a=u*2.00;
        s=a*0.15;
        ta=s+a;
        printf("%.2f",ta);
    }
}