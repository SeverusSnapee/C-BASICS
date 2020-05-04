#include<stdio.h>
#include<conio.h>
int main()
{ int hour,min,sec;float total;
printf("Enter Hour Min And Seconds Respectively\n");
scanf("%d %d %d",&hour,&min,&sec);
total=hour*60+min+sec/60;
printf("Total minutes =%.2f ",total);
return(0);


}