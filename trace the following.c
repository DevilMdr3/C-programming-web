#include<stdio.h>
void display(int,int,int);
void main()
{
    int a=7,b=5;
    display(a<b,a==b,a<<1);
}
void display(int x,int y,int z)
{
printf("%d",x+y+z);
}
