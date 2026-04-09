#include<stdio.h>
int main()
{
char name[50];
printf("Enter a name:\n");
scanf("%[^\n]",name);
printf("Name:%s\n",name);
return 0;
}
