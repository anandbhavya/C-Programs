#include <stdio.h>

int main()
{
    int original_number;
    printf("enter the number");
    scanf("%d" ,&original_number);
    
    int number=original_number;
    int reverse_number=0;
    int rem;
    while (number>0)
    {
        rem=number%10;
        printf("%d", rem);
        reverse_number=(reverse_number*10)+rem;
        number=number/10;
       
    }
    if (reverse_number== original_number)
    {
        printf("number is a palindrome");
    }
    else 
    { printf ("number is not a palindrome");
        
    }
    return 0;
}


