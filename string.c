#include<stdio.h>
#include<string.h>
void main()
{
hh
char s1[90],s2[80];
gets(s1); gets(s2);
printf("Lengths: %d %d\n",strlen(s1),strlen(s2));
if(strcmp(s1,s2))printf("Equal    \n);
strcat(s1,s2);
printf("%s\n",s1);
strcpy(s1,"This is a Test");
printf(s1   \n);
if(strchr("hello",'e')) printf("e is in hello \n");

}