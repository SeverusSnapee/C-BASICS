#include<stdio.h>
#include<conio.h>
void main()
{ int n;int factorial=1;
printf("Enter the number whose factorial you want to find   ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{ factorial=i*factorial;}
printf("The factorial is %d", factorial);
}