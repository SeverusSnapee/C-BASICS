#include<stdio.h>
int main()
{int n,n1=0,n2=1,n3;
printf("Enter the number from which you want to find fibannocis series ");
scanf("%d",&n);
printf(" %d %d  ",n1,n2);
for(int i=2;i<=n;++i)
{n3=n1+n2; 
printf("%d  ",n3); 
n1=n2;
n2=n3;

}
return(0);}