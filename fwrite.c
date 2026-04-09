#include<stdio.h>
int main(){
    FILE *file=fopen("example.dat","wb");
    if(file==NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    int numbers[]={1,2,3,4};
    fwrite(numbers,sizeof(int),4,file);

    fclose(file);
    return 0;
}
