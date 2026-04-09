#include<stdio.h>
int main()
{
int a=10,b=20,c=5;
if((a>b)&&(b>c))
{
printf("Both conditions are true.\n");
}
else{
printf("Atleast one condition is false.\n");
}
if((a>b)||(b>c))
{
printf("At least one condition is true.\n");
}
if(a>b)
{
printf("The condition 'a>b' is false.\n");
}
return 0;
}
