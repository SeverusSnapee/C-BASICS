#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
printf("Enter the 2 Numbers");
scanf("%d %d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("A is %d\n",a);
printf("B is %d",b);
}