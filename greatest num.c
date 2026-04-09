#include<stdio.h>
int main ()
{
int a, b,c, num;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if (a>b&&a>c)
{
printf("greatest number is %d\n",a);
}
else if (b>c&&b>a)
{
printf("greatest number is %d\n",b);
}
else if(c>a&&c>b){
printf("greatest number is %d\n",c);
}
else {
    printf("There is a tie.\n");
}
return 0;

}
