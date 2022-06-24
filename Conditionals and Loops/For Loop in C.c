#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    for (int i=a; i<=b; i++) 
    {
        if (i<=9) 
        {
            if (i == 1) 
                printf("%s\n","one");
            else if (i == 2) 
                printf("%s\n","two");
            else if (i == 3) 
                printf("%s\n","three");
            else if (i == 4) 
                printf("%s\n","four");
            else if (i == 5)
                printf("%s\n","five");        
            else if (i == 6)
                printf("%s\n","six");       
            else if (i == 7)
                printf("%s\n","seven");         
            else if (i == 8)
                printf("%s\n","eight");     
            else 
                printf("%s\n","nine"); 
        }
        else if (i%2==0) 
            printf("%s\n","even");
        else if (i%2==1)
            printf("%s\n","odd");
    }
    return 0;
}


