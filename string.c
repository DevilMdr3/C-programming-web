#include<stdio.h>
int main()
{
int num;
char name[20];

printf("Enter a number and a name:");
scanf("%d %s", &num,name);

printf("Number:%d\n",num);
printf("Name:%s\n",name);
return 0;
}
