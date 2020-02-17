#include<stdio.h>
void main()
{
    float fr,cent;

    printf("Enter the temperature(F)");
    scanf("%f,&fr");
    cent=5.0/9.0*(fr-32);
    printf("\n Tempetature in Centigrade=%f",cent);

    return 0;


}
