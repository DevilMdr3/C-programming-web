#include<stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;
    var=3000;
    ptr=&var;
    pptr=&ptr;
    printf("Value of var=%d\n",var);
    printf("Value of var=%d\n",*ptr);
    printf("Value of var=%d\n",**pptr);
    printf("Address of var=%d\n",&var);
    printf("Address of ptr=%d\n",ptr);
    printf("Address of ptr=%d\n",&ptr);
    printf("Address of pptr=%d\n",pptr);
    printf("Address of pptr=%d\n",&pptr);
    return 0;
}
