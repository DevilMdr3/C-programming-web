#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee{
    char name[50];
    char address[100];
    float salary;
};
int main (){
    FILE *fptr;
    struct Employee emp;
    char searchName[50];
    int found=0;
    fptr=fopen("employee.txt","r");
    if(fptr==NULL){
        printf("Error opening file!\n");
        return 1;
        }
        printf("Enter the name to search:");
        scanf("%[^\n]",searchName);
        while(fscanf(fptr,"%49s %99s[^\n]%f",emp.name,emp.address,&emp.salary)!=EOF)
            {
        if(strcmp(emp.name,searchName)==0)
        {
        printf("\nEmployee Found!\n");
        printf("Name:%s\n",emp.name);
        printf("Address:%s\n",emp.address);
        printf("Salary:%.2f\n",emp.salary);
        found=1;
        break;
        }

if(!found){
    printf("\nEmployee not found!\n");
}
{
fclose(fptr);
return 0;
}

