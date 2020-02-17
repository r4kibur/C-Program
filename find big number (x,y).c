#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any number:");
    scanf("%d %d %d",&a,&b,&c);


    if(a>b)
    {
        if(a>c)
        {
            printf("a is maximum number:\n");
        }
        else{
            printf("c is maximum number:\n");
        }
    }
    else if(b>c)
        printf("b is maximum nuber:\n");
    else
        printf("c is maximum number:\n");



    return 0;
}
