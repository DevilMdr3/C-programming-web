#include<stdio.h>
int main()
{
int a,b,sum,difference,product,quotient,remainder;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
sum = a+b;
difference = a-b;
product = a*b;
quotient = a/b;
remainder = a%b;
printf("The sum is %d\n",sum);
printf("The difference is %d\n",difference);
printf("The product is %d\n",product);
printf("The quotient is %d\n",quotient);
printf("The remainder is %d\n",remainder);
return 0;
}
