#include<stdio.h>
#include<conio.h>
int main()
{int n,r,sum=0,temp;
printf("Enter the Number  \n ");
scanf("%d",&n);
temp=n;
while(n>0)
{r=n%10;
sum=sum*10+r;
n=n/10;
}
if(temp==sum)
{printf("Number is pallindrome  ");
}else {printf(" Not pallindrome ");}return 0;
getch();}