#include <stdio.h>
#include <stdlib.h>
    
int main() {
    
   int n, *arr;
   scanf("%d",&n);
    
   arr = (int*) malloc(n * sizeof(int));
   
   int sum=0;
  
   for (int i = 0; i<n; i++) {
       scanf("%d",arr+i);
       sum += *(arr+i);
   }
  
   free(arr);
   
   printf("%d",sum);
    return 0;
}
