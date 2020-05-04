#include<stdio.h>
int main()
{ int a[50][50],i,j,c=2,r=3;

for(i=0;i<c;++i)
{for(j=0;j<r;++j)
scanf("%d",&a[i][j]);}
for(i=0;i<c;++i)
{for(j=0;j<r;++j)
printf("%d        \n",a[i][j]);}
return 0;
}