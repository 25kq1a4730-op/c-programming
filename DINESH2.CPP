#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int b=a--;
int c=--a+--b;
printf("%d,%d,%d",a,b,c);
getch();
}