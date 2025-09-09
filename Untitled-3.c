#include <stdio.h>

int main() {

  int n1;

  printf("Enter a number: ");
  scanf("%d", &n1);

  
  if (n1 >0)
    {
        printf("num is positive %d", n1);
    }
 
  else if (n1<0)
    {
        printf("num is negative %d", n1);
    }
 else 
   {
    printf("The number is %d" ,n1);
   }
  return 0;
}
