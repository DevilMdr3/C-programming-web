#include<stdio.h>
int main()
{
int a=5,b=10;
int result;
printf("initial value of a: %d\n",a);
result = ++a;
printf("After Prefix Increment (++a): a = %d, result = %d\n",a, result);
result = b++;
printf("\nInitial value of b: %d\n",b-1);
printf("After Postfix increment(b++):b=%d,result =%d\n",b,result);
a=5;
b=10;
printf("After Prefix Decrement (--a):%d,result=%d\n",a, result);
result = b--;
printf("\nInitial value of b: %d\n",b+1);
printf("After Postfix Decrement(b--): b=%d, result =%d\n",b,result);
return 0;
}
