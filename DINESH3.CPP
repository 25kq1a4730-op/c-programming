#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=15,b=a--,d=5;
int c=++a+--b-a+b++-d;
printf("%d,%d,%d",a,b,c,d);
getch();
}

