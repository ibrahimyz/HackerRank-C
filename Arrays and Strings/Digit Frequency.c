#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int *arr;
    arr = (int*) malloc(10 * sizeof(int));      // Created an array for output.
    for (int i=0; i<10; i++) { *(arr+i)=0; }
      
    char *s;
    s = malloc(1000 * sizeof(char)); 
    scanf("%s",s);                            
    s = realloc(s, strlen(s)+1); 
    
    for (int i=0; *(s+i)!='\0'; i++) {
        if (*(s+i)>='0' && *(s+i)<='9')    // *(s+i) is digit or not?
            (*(arr+(*(s+i)-'0')))++;       // eg *(arr+0)++ if *(s+i) == 0 {look at the ASCII table}
    }

    for (int i=0; i<10; i++) { printf("%d ",*(arr+i)); }

    return 0;
}
