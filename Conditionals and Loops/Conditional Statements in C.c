#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    
    if (num <= 9) 
    {
        if (num == 1) 
        { printf("%s","one"); }
      
        else if (num == 2) 
        { printf("%s","two"); }
      
        else if (num == 3) 
        { printf("%s","three"); }
      
        else if (num == 4) 
        { printf("%s","four"); }   
      
        else if (num == 5) 
        { printf("%s","five"); }         
      
         else if (num == 6) 
         { printf("%s","six"); }           
      
        else if (num == 7) 
        { printf("%s","seven"); }    
      
        else if (num == 8) 
        { printf("%s","eight"); }  
      
        else 
        { printf("%s","nine"); }    
    }
  
    else
        printf("%s","Greater than 9");

    return 0;
}

