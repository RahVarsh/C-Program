#include<stdio.h>
// a program in c to find the sum of digits of the number entered by the user using recursion.
int sum(int num); // Function Declaration

int main() 
{
    int num,c;
    printf("Enter a number: ");
    scanf("%d",&num);
    c = sum(num);  // Function Call
    printf("The sum of digits in %d is %d.",num,c);
    return 0;
}

int sum(int num) //Function definition
{
    if(num != 0)
    {
        return ( num % 10 + sum ( num / 10));
    }
    else 
    {
        return 0;
    }
}


