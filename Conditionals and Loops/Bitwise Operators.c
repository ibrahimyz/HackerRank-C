#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int maxAND=0, maxOR=0, maxXOR=0, and, or, xor;
  
    for (int a=1; a<=k; a++) {
        for (int b=a+1; b<=n; b++) {
   
            and=a&b;
            or=a|b;
            xor=a^b;
            
            if (and>maxAND && and<k)
                maxAND = a&b;
            if (or>maxOR && or<k)
                maxOR = a|b;
            if (xor>maxXOR && xor<k)
                maxXOR = a^b;  
      }
  }
  printf("%d\n%d\n%d",maxAND,maxOR,maxXOR);
  
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
