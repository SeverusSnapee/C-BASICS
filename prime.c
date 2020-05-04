#include<stdio.h>
#include<conio.h>
int main()
{int n,m,flag=0;
printf("Enter the Number  ");
scanf("%d",&n);
m=n/2;
    for(int i=2;i<m;++i)
   { if(n%i==0)
        { printf("Not Prime");flag=1;
        break; }}
        if (flag==0)
        {printf("Number is   prime");
        }
        return 0; getch();

}