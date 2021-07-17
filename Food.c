#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number from 1 to 5:\n");
    scanf("%d", &num);
    switch(num) 
    {
        case 1:
            printf("Food Item - Pasta\nPrice - Rs 179 ");
            break;    
        case 2:    
            printf("Food Item - Sandwich\nPrice - Rs 149 ");
            break;
        case 3:
            printf("Food Item - Burger\nPrice - Rs 129 ");
            break;
        case 4:    
            printf("Food Item - Pizza\nPrice - Rs 349 ");
            break;
        case 5:
            printf("Food Item - French Fries\nPrice - Rs 179 ");
            break;
        default:
            printf("The Entry is out of range\n");
            break;
    }
    return 0;
} 
