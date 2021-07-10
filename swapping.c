#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number a = \n");
    scanf("%d", &a);
    printf("Enter number b = \n");
    scanf("%d", &b);
    printf("Before swap a = %d and b = %d \n",a ,b);
    a=a+b;    // eg. a=46(18+28)
    b=a-b;    // eg. b=18(46-28)
    a=a-b;    // eg. a=28(46-18)
    printf("After swap a = %d and b = %d \n",a , b);

    return 0;
}
