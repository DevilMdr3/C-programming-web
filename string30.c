#include<stdio.h>
int main()
{
char ch[30];
char ch1[30];
gets(ch);
puts(ch);
fgets(ch1,sizeof(ch),stdin);
fputs(ch1,stdout);
return 0;
}
