#include<stdio.h>
void functionA(){
    printf("inside functionA\n");
}
void functionB(){
    functionA();
    printf("inside functionB\n");
}
int main(){
    functionB();
    return 0;
}
