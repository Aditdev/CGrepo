#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<graphics.h>
#define PI 3.14
float x1,y1,x2,n,y2,xn3,theta,yn3,x3,y3,tx,ty,xn1,yn1,xn2,yn2;
void main()
{
int gd=DETECT, gm=0;
detectgraph(&gd,&gm);
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");

printf("Enter the coordinates of end pt-1 \n");
scanf("%f%f",&x1,&y1);
printf("Enter the coordinates of end pt-2 \n ");
scanf("%f%f",&x2,&y2);
printf("Enter the coordinates of end pt-3 \n ");
scanf("%f%f",&x3,&y3);

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

outtextxy(x2+2,y2+2,"Before translation");


printf("Enter the angle of rotation in degrees\n");
scanf("%f",&n);
theta = n*(3.14/180);
xn1=(x1*cos(theta))-(y1*sin(theta));
yn1=(y1*cos(theta))+(x1*sin(theta));
xn2=(x2*cos(theta))-(y2*sin(theta));
yn2=(y2*cos(theta))+(x2*sin(theta));
xn3=(x3*cos(theta))-(y3*sin(theta));
yn3=(y3*cos(theta))+(x3*sin(theta));

outtextxy(xn3+2,yn3+2,"After translation");
line(xn1,yn1,xn2,yn2);
line(xn2,yn2,xn3,yn3);
line(xn3,yn3,xn1,yn1);

getch();

}

