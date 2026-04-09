#include<stdio.h>
int main(int argo,char*argv[]){
	printf("Total arguements:%d\n",argc);
	for(int i=0;i<argc;i++){
		printf("Argument %d:%s\n",i,argv[i]);
	}
return 0;
}