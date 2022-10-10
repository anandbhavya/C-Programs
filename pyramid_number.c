#include <stdio.h>

int main()
 {
    for(int i=0 ; i<=4 ; i++)
    {
      for(int j=0 ;j<i; j++)
      {
           printf("%d",i);
      } 
      printf("\n");
    }
    
      for(int i=3 ; i>=1 ; i--)
    {
      for(int j=1 ;j<=i; j++)
      {
           printf("%d",i);
      } 
      printf("\n"); 
        
    }
      
      return 0;
}