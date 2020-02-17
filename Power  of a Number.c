#include<stdio.h>
int main()
{

    int a,b;
    long long result =1;
    printf("Enter a base Number:");
    scanf("%d",&a);

    printf("Enter an Expenent:");
    scanf("%d",&b);

    while (b !=0){
        result*=a;
        --b;
    }
    printf("This is Answer=%lld",result);

    return 0;

}
