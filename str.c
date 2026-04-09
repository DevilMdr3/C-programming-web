#include<stdio.h>
int main()
{
char str[50];
printf("Enter a string.");
fgets(str,sizeof(str),stdin);
printf("String:%s",str);
return 0;
}
