#include<stdio.h>
// A program in c to find the lcm of two numbers entered by the user using recursion.
int lcm(int a, int b); // Function declaration 

int main()
{
    int a,b,result;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a ,&b);
    result = lcm(a,b); // Function call
    printf("The LCM of %d and %d is %d\n",a,b,result);
    return 0;
}

int lcm(int a, int b) // Function definition
{
    static int common = 1;
    if(common % a == 0 && common % b == 0)
    {
        return 0;
    }
    common++;
    lcm(a,b);
    return common;
}