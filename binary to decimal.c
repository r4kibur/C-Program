#include<stdio.h>
int main()
{
    int a,b,d=0,base=1,rem;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        rem=a%10;
        d=d+rem*base;
        a=a/10;
        base=base*2;

    }
    printf("this aber=%d\n",b);
    printf("this ans=%d\n",d);
    return 0;

}
