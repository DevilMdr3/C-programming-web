#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));

    if(ptr==NULL){
    printf("Memory allocation failed");
    return 1;
    }
    printf("Memory allocated successfully.\n");
    free(ptr);
    return 0;
}
