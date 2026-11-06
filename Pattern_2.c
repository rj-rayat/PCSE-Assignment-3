#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int order = 1;
    int space = n-1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j =order; j > 0; j--)
        {
            printf("%d", j);
        }
        order++;
        space--;
        printf("\n");
    }
}