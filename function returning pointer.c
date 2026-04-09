#include<stdio.h>

int* getStaticValue()
    {
    static int value=10;
    return &value;
    }
    int main()
    {
        int *ptr=getStaticValue();
        printf("Value:%d\n",*ptr);
        return 0;
    }
