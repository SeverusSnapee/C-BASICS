#include<stdio.h>
int main()
{ 
int n[10] = { 22, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *ptr=n;
for(int i=0;i<10;++i)
printf("%d\n",*(ptr+i));


return 0;
}