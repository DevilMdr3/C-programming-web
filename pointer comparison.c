#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    int *ptr1=&arr[1];
    int *ptr2=&arr[3];
    if(ptr1<ptr2)
    {
        printf("ptr1 points to an earlier element than ptr2\n");
    }
    if (ptr1==ptr2)
    {
    printf("Both pointers point to the same element\n");
    }else{
        printf("Pointers are not equal\n");
    }
return 0;
}
