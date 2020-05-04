#include<stdio.h>
int main()
{ int n,i;
float sum=0,average;
printf("Enter the number till whose you want the average to find");
scanf("%d",&n);
for(i = 0; i<n; ++i)
sum=sum + i;

average=sum/n;
printf("Average is %4.1f",average);
return 0;
}