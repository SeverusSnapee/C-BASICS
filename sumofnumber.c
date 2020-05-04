#include<stdio.h>
#include<conio.h>
int main()
{ int n,sum=0,r;
printf("Enter the Number   ");
scanf("%d",&n);
while(n>0)
{r=n%10;
sum=sum+r;
n=n/10;}
printf("Sum of Number is %d",sum);
getch();
return(0);

}