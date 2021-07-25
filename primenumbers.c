#include<stdio.h>
// The program in c to check whether the number is prime number or not using recursion.
int primeno(int num, int i); // Function declaration
int main()
{
    int num,check;
    printf("Enter the number: ");
    scanf("%d",&num);
    check = primeno(num,num/2); // Function call
    if(check == 1)
    {
        printf("%d is a prime number.\n",num);
    }else
    {
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}

int primeno(int num, int i) // Function definition
{
    if(i == 1)
    {
        return 1;
    }else if( num % i == 0)
    {
        return 0;
    }
    else
    {
        return primeno(num, i - 1);
    }
}