#include<stdio.h>
#include<conio.h>
int main()
{int n,sum=0,r,temp;
printf("Enter the Number");
scanf("%d",&n);
temp=n;
while(n>0)
{ 
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
}
if(temp==sum)
printf("Number is Armstrong  ");
else printf("Not   ");

getch();
return (0);}








