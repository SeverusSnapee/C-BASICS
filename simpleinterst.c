#include<stdio.h>
#include<conio.h>
void main()
{ int year,period;
float amount,inrate,value=0;
printf("Enter the amount,interst rate and period \n");
scanf(" %f %f %d",&amount,&inrate,&period);
printf("\n\n");
year = 1;
while(year<=period)
{
    value = amount + amount*inrate;
    printf(" %2d Rs %8.2f\n",year,value);
    amount = value ;
    year = year + 1 ;
}

}