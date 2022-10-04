#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<graphics.h>
#define PI 3.141592654
int x1,y1,x2,y2,tx,ty,xn1,yn1,xn2,yn2;
void main()
{
int gd=DETECT, gm=0;
detectgraph(&gd,&gm);
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");

printf("Enter the starting coordinates \n");
scanf("%d%d",&x1,&y1);
printf("Enter the end coordinates \n ");
scanf("%d%d",&x2,&y2);

printf("Enter the translation\n");
scanf("%d%d",&tx,&ty);
outtextxy(x2+2,y2+2,"Before translation");
line(x1,y1,x2,y2);
xn1=x1+tx;
yn1=y1+ty;
xn2=x2+tx;
yn2=y2+ty;
outtextxy(xn2+2,yn2+2,"After translation");
line(xn1,yn1,xn2,yn2);
getch();
}

