#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
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
}