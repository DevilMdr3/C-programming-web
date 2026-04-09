#include<stdio.h>
int main() {
int num=15;
if (num>0){
            if(num<10){
            printf("The number is positive and less than 10\n");
            }
                else {
                    printf("The number is positive and greater than or equal to 10\n");
                    }
}else{
    printf("The number is zero or negative.\n");
}
return 0;
}
