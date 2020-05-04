#include<stdio.h>
 #define MAX 100
 #define LEN 80
 char text [MAX][LEN];
 int main(void)
 { int t,i,j;
 printf("Enter an empty line to quit. \n");
 for(t=0;t<MAX;t++)
 { printf("%d :",t);
gets(text[t]);
if(!*text[t]) break; }
for(i=0;i<t;i++){
for(j=0;j<LEN;j++)

putchar(text[i][j]);
printf("\n");}
return(0);
 }
 