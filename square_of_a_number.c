#include <stdio.h>
#include <math.h>

void square (int num)
{
    int square = pow(num,2);
    printf("square of the number %d is %d",num,square);
}
 int main()
 
 {
     int num;
     printf ("enter the number");
     scanf ("%d",&num);
     square (num);
     return 0;
 }


