#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d",&marks);

    if(marks>80){
        printf("Yot got A");
            }
            else if(marks>70){
                printf("You got B");
            }
            else if (marks>60){
                printf("You got C");
            }
            else if(marks>50){
                printf("You got D");
            }
            else if (marks>40){
                printf("You got E");
                }
            else if (marks>=30){
                printf("You got F");
            }
            else if(marks<30){
                printf("You have faile The Exam ):");
            }
    return 0;

}
