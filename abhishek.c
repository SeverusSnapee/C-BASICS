#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the size of pattern :: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= 1; j--)
        {
            if(j - i > 0)
            {
                printf(" ");
            }
            else printf("%d",j);
        }
        printf("\n");
    }
}