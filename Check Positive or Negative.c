#include<stdio.h>
int main()
{
    double a;
    printf("Enter a number:");
    scanf("%lf",&a);

    if(a<=0.0);
    {
        if(a==0.0);
        printf("You Entered 0.");
        else
            printf("You Entered a nagative number.");
    }
    else
        printf("Yoau Entered a positive number.");

    return 0;

}
