#include<stdio.h>
int main ()
{
int num;
printf("Enter numbers(negative to stop):\n");
scanf("%d",&num);
while (num>=0){
printf("You entered:%d\n",num);
scanf("%d",&num);}
return 0;
}
