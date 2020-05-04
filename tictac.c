#include<stdio.h>                 
#include<stdlib.h>
#include<conio.h>
 char matrix[3][3];
char check(void);
void init_matrix(void);
int getplayer();
void getcomputer(void);
void dispmatrix(void);
int main(void)
{char done;
printf("This is the game of tic tac toe .\n");
printf("You will be playing against the computer.\n");
done=' ';
init_matrix();
while(done==' ')
{ dispmatrix();
getplayer();
done=check();
if(done!=' ')break;
getcomputer();
done=check();
}

if(done=='X')
printf("you won. \n"); else  printf("Computer won.\n");
dispmatrix();
return (0);

}
void init_matrix(void)
{ int i,j;
for(i=0;i,3;++i)
for(j=0;j<3;++j)
matrix[i][j]=' ';
}
int getplayer()
{int x,y;
printf("Enter the coordinates for your move");
scanf("%d *c %d",&x,&y);
x--;y--;
if(matrix[x][y]!=' ')
{printf("Invalid move.\n");
getplayer();
    }
    else(matrix[x][y]='X');
    }
    void getcomputer()
    { int i,j;
    for(i=0;i<3;++i)
    for(j=0;j<3;++j)
    if(matrix[i][j]==' ') break;
    if(i*j==9)
{ printf("Draw\n");
exit(0);
}
else matrix[i][j]='O';
}
void dispmatrix(void)
{ int t;
for (t=0;t<3;t++)
{printf("%c | %c |%c",matrix[t][0],matrix[t][1],matrix[t][2]);
if(t!=2)printf(" \n ---|---|---|\n");
}printf("\n");

}

char check(void)
{int i;
for(i=0;i<3;++i)
if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])
return matrix[i][0];

for(i=0;i<3;++i)
if(matrix[0][i]==matrix[1][i]&& matrix[0][i]==matrix[i][2])
return matrix[0][0];
if(matrix[0][0]==matrix[1][1]&& matrix[1][1]==matrix[2][2])
return matrix[0][0];
if(matrix[0][2]==matrix[1][1]&& matrix[1][1]==matrix[0][2])
return matrix[0][2];
return ' ';getch();
}