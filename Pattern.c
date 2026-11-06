#include <stdio.h>
int main()
{ 
  int n;
  scanf("%d", &n);
    int star = 0;
    int space = n -1;

    
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
       
        if (i % 2 == 1)
        {
            for (int j = 0; j <= star; j++)
            {
                
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j <= star; j++)
            {
                
                printf("-");
            }
        }
        star+=2;
        space--;
        printf("\n");

        
    }
   
   
    int restar = n * 2;
    int respace = 0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < respace; j++)
        {
            printf(" ");
        }
       
        if (i % 2 == 0)
        {
            for (int j = 0; j <= restar -2; j++)
            {
                
                printf("-");
            }
        }
        else
        {
            for (int j = 0; j <= restar -2; j++)
            {
                
                printf("#");
            }
        }
        restar-=2;
        respace++;
        printf("\n");

        
    }
    
   

        
    
  return 0;
}