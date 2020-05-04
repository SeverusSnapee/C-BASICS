#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define CLASSES 3
#define GRADES 5
int grade[CLASSES][GRADES];
void enter_grades();
int get_grade(int num);
void disp_grades(int g[][GRADES]);
int main(void)
{ char ch,str[80];
for(;;){do{ 
printf("Enter Grades \n");
printf("Report Number \n");
printf("Quit\n");
gets(str);
ch=toupper(*str);
}while(ch!='E'&&ch!='R'&&ch!='Q');
switch(ch)
{case 'E':
enter_grades();
break;
case 'R': 
disp_grades(grade);break;
case 'Q':
exit(0);break;
}
}return 0;
}
void enter_grades()
{ int t,i;
for(t=0;t<CLASSES;++t)
{printf(" CLASS = %d \n",t+1);
for(i=0;i<GRADES;++i)
grade[t][i]=get_grade(i);}

}
int get_grade(int num)
{  int s;
printf("enter Grade for studet %d\n   ",num+1);
scanf("  %d",&s);
return(s);
}  
void disp_grades(int g[CLASSES][GRADES])
{if(g[0][0]==0) printf("NOT ENTERED YET"); exit (0);
int t,i;
for (t=0;t<CLASSES;++t)
{ printf("Class # %d: \n",t+1);
for(i=0;i<GRADES;++i)
printf("student %d is %d\n",i+1,g[t][i]);}

}  
