#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr;
    scanf("%d", &num);
    
    arr = (int*) malloc(num * sizeof(int));
    
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(int i = num-1; 0 <= i; i--) {
        printf("%d ",*(arr + i));
    }
     
    free(arr);
    return 0;
}
