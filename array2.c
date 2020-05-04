#include<stdio.h>
int main(void)
{
    int a[10],n,g=0;
    for(int i=0;i<10;++i)
    scanf("%d\n",&a[i]);
    scanf("%d\n",&n);
    for(int i=0;i<10;++i)
    { if(a[i]==n)
      {g++;} else g=0;
    }if(g==1)printf ("found");else printf("not found");
}