#include <stdio.h>

int main() 
{
    int num, total=0;
    scanf("%d", &num);
   
   for(int i=0; i<5; i++) {
       int digit = num % 10;
       num /= 10;
       total += digit;
    }
  
    printf("%d",total);
    return 0;
}
