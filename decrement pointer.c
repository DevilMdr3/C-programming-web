#include<stdio.h>
int main()
{
    int num=30;
    int *p;
    p=&num;
    printf("Address of p variable is %d\n",p);
    p=p-1;
    printf("After decrement:Address of p variable is %d\n",p);
return 0;
}
