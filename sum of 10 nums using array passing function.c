#include<stdio.h>
int sum(int n[]);
void display(int n[]);
int main()
{
int i,a[10];
printf("Enter 10 number:");
for(i=0;i<10;i++)
    scanf("%d",&a[i]);
display(a);
printf("\nThe sum of 10 number=%d",sum(a));
return 0;
}
int sum(int n[])
{
    int i,sum=0;
    for(i=0;i<10;i++)
        sum=sum+n[i];
    return sum;
}
void display(int n[])
{
int i;
printf("Your 10 numbers are \n");
for(i=0;i<10;i++)
printf("%d\t",n[i]);
}
