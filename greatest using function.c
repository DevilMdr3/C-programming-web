//WAP to find greatest number among two number using fuction
#include<stdio.h>
int large(int x,int y)
{
if(x>y)
return x;
else
return y;
}
int main()
{
int a,b,c;
printf("Enter two number");
scanf("%d%d",&a,&b);
c=large(a,b);
printf("Large value=%d",c);
return 0;
}
