#include<stdio.h>
int main()
{
    int n, i, t, j;
    scanf("%d", &n);
    for ( j = 0; j <= n; j++)
    {
        for (i = 1; i <=j; i++)
        {
           printf("%d ", i);
        }
        printf("\n");
        
    }
    return 0;
}