#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(3*sizeof(int));

    if(ptr==NULL){
    printf("Memory allocation failed");
    return 1;
    }
    ptr=(int*)realloc(ptr,5*sizeof(int));

    if(ptr==NULL){
    printf("Memory allocation failed");
    return 1;
    }
    free(ptr);
    return 0;
}
