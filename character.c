#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ char a[50];int i,l;char b[50];
gets(a);
for(i=0;i<50;++i)
{while(a[i]!='\0')
{l++;}
} 
for(i=0;i<50;++i)
{ 
b[i]=a[i+l];
}
for(i=0;i<50;++i)
{ printf("%c",b[i]);
}for(i=0;i<=l;++i)
{
    printf("%c",a[i]);
}
 return 0;
}