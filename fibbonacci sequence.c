#include<stdio.h>
void fibonacci(int n){
int first=1,second=2,next;
printf("Fibonacci Sequence up to %d terms:\n",n);
printf("%d%d",first,second);
for(int i=2;i<n;i++){
next=first+second;
printf("%d",next);
first=second;
second=next;
}
printf("\n");
}
int main() {
int terms;
printf("Enter the numbers of terms:");
scanf("%d",&terms);
fibonacci(terms);
return 0;
}
