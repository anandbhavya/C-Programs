#include <stdio.h>
void even (int num)
{ 
    if (num%2==0)
    {
    printf("number is even");}
    else {
       printf("number is odd");
       
    }
}
int main()
{
    int num;
    printf("enter any number");
    scanf("%d" ,&num);
    even(num);

    return 0;
}

