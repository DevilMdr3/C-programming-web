#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int vowelCount=0,consonantCount=0;
    char ch;
    printf("Enter a sting:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        ch=tolower(str[i]);
        if(isalpha(ch))
        {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        vowelCount++;
        }
        else{
            consonantCount++;
        }
        }
    }
    printf("Number of vowels:%d\n",vowelCount);
    printf("Number of consonants:%d\n",consonantCount);
    return 0;
}
