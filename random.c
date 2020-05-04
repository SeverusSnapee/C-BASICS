#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,ans,i;
    for(i=0;i<50;++i)
   { a=rand()%10+1;
    b=rand()%10+1;
    printf("%d times %d is ",a,b);
    scanf(" %d",&ans);
    if(ans==a*b)
{printf("Correct Response\n"); 
}else {printf("try again\n");
}}
return 0;}