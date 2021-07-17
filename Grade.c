#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Student's marks:\n");
    scanf("%d", &marks);
    if(marks>=85)
    {
        printf("As per the marks of the student,the Grade is A.\n");
        if(marks>90)
        {
            printf("Excellent!");
        }
    }else if(marks>=70)
    {
        printf("As per the marks of the student,the Grade is B.\n");
        if(marks>75)
        {
            printf("Very Good!");
        }
    }else if(marks>=55)
    {
        printf("As per the marks of the student,the Grade is C.\n");
        if(marks>60)
        {
            printf("Good! Hard work is required.");
        }
    }else if(marks>=40)
    {
        printf("As per the marks of the student,the Grade is D.\n");
        if(marks>45)
        {
            printf("You have to work very hard.These marks are not sufficient.");
        }
    }if(marks<40)
    {
        printf("As per the marks of the student,the Grade is F.\nFail!\n");
    }
    return 0;
}