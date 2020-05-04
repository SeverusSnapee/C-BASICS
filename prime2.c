#include<stdio.h>
#include<conio.h>


#include<stdio.h>
#include<conio.h>
int main()
{int n,m;
printf("Enter the Number  ");
scanf("%d",&n);
m=n/2;
    for(int i=2;i<m;++i)
   { if(n%i==0)
        { printf("Not Prime");
        break; }
    else {printf("%ch","PRIME");break;}}
        return 0; getch();

}